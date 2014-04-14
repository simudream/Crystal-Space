// This file is automatically generated.
#include "cssysdef.h"
#include "csutil/scf.h"

// Put static linking stuff into own section.
// The idea is that this allows the section to be swapped out but not
// swapped in again b/c something else in it was needed.
#if !defined(CS_DEBUG) && defined(CS_COMPILER_MSVC)
#pragma const_seg(".CSmetai")
#pragma comment(linker, "/section:.CSmetai,r")
#pragma code_seg(".CSmeta")
#pragma comment(linker, "/section:.CSmeta,er")
#pragma comment(linker, "/merge:.CSmetai=.CSmeta")
#endif

namespace csStaticPluginInit
{
static char const metainfo_rendloop_loader[] =
"<?xml version=\"1.0\"?>"
"<!-- rlloader.csplugin -->"
"<plugin>"
"  <scf>"
"    <classes>"
"      <class>"
"        <name>crystalspace.renderloop.loop.loader</name>"
"        <implementation>csRenderLoopLoader</implementation>"
"        <description>Render loop loader</description>"
"        <requires>"
"          <class>crystalspace.engine.3d</class>"
"        </requires>"
"      </class>"
"    </classes>"
"  </scf>"
"</plugin>"
;
  #ifndef csRenderLoopLoader_FACTORY_REGISTER_DEFINED 
  #define csRenderLoopLoader_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csRenderLoopLoader) 
  #endif

class rendloop_loader
{
SCF_REGISTER_STATIC_LIBRARY(rendloop_loader,metainfo_rendloop_loader)
  #ifndef csRenderLoopLoader_FACTORY_REGISTERED 
  #define csRenderLoopLoader_FACTORY_REGISTERED 
    csRenderLoopLoader_StaticInit csRenderLoopLoader_static_init__; 
  #endif
public:
 rendloop_loader();
};
rendloop_loader::rendloop_loader() {}

}
