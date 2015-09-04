#include "framework/graphic/graphic.h"
#include "framework/scheduler/scheduler.h"
#include "framework/lua/lua.h"
#include "framework/core/filemanager.h"

using namespace std;

int main(int, char*[])
{
    LOGI("Start APP");

    g_platform.init();

    g_fileManager.init();
    g_fileManager.addSearchPath(g_platform.getPackagePath());
    g_fileManager.addSearchPath(g_fileManager.getBaseDir());
    g_fileManager.addSearchPath(g_platform.getCacheDir());
    g_fileManager.setWriteDir(g_platform.getCacheDir());

    g_graphic = new Graphic();
    g_painter.resetDrawArea();

    g_lua.init();
    LuaRegister();

    if(!g_lua.doString("", g_fileManager.readFileString("assets/scripts/init.lua").c_str()))
        LOGE("Unable to load: assets/scripts/init.lua");
    else if(!g_lua["init"].safeCall())
        LOGE("Unable to call function init");

    // g_platform.ShowAdMob(true, "ca-app-pub-3940256099942544/6300978111");

    g_platform.loop();

    g_lua["terminate"].call();
    g_platform.terminate();
    g_graphic->terminate();
    g_fileManager.terminate();

    return true;
}