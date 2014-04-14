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
static char const metainfo_pathloader[] =
"<?xml version=\"1.0\"?>"
"<!-- pathloader.csplugin -->"
"<plugin>"
"  <scf>"
"    <classes>"
"      <class>"
"        <name>crystalspace.addons.pathloader</name>"
"        <implementation>csPathLoader</implementation>"
"        <description>CS Path loader</description>"
"      </class>"
"    </classes>"
"  </scf>"
"</plugin>"
;
  #ifndef csPathLoader_FACTORY_REGISTER_DEFINED 
  #define csPathLoader_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csPathLoader) 
  #endif

class pathloader
{
SCF_REGISTER_STATIC_LIBRARY(pathloader,metainfo_pathloader)
  #ifndef csPathLoader_FACTORY_REGISTERED 
  #define csPathLoader_FACTORY_REGISTERED 
    csPathLoader_StaticInit csPathLoader_static_init__; 
  #endif
public:
 pathloader();
};
pathloader::pathloader() {}

}
