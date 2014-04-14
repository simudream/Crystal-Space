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
static char const metainfo_speed[] =
"<?xml version=\"1.0\"?>"
"<!-- speed.csplugin -->"
"<plugin>"
"  <scf>"
"    <classes>"
"      <class>"
"        <name>crystalspace.mesh.animesh.animnode.speed</name>"
"        <implementation>SpeedNodeManager</implementation>"
"        <description>Crystal Space speed animation nodes of an animated mesh</description>"
"      </class>"
"    </classes>"
"  </scf>"
"</plugin>"
;
  #ifndef SpeedNodeManager_FACTORY_REGISTER_DEFINED 
  #define SpeedNodeManager_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(SpeedNodeManager) 
  #endif

class speed
{
SCF_REGISTER_STATIC_LIBRARY(speed,metainfo_speed)
  #ifndef SpeedNodeManager_FACTORY_REGISTERED 
  #define SpeedNodeManager_FACTORY_REGISTERED 
    SpeedNodeManager_StaticInit SpeedNodeManager_static_init__; 
  #endif
public:
 speed();
};
speed::speed() {}

}
