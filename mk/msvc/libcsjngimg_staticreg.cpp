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
static char const metainfo_csjngimg[] =
"<?xml version=\"1.0\"?>"
"<!-- csjngimg.csplugin -->"
"<plugin>"
"  <scf>"
"    <classes>"
"      <class>"
"        <name>crystalspace.graphic.image.io.jng</name>"
"        <implementation>csJNGImageIO</implementation>"
"        <description>CrystalSpace JNG/MNG image format I/O plugin</description>"
"      </class>"
"    </classes>"
"  </scf>"
"</plugin>"
;
  #ifndef csJNGImageIO_FACTORY_REGISTER_DEFINED 
  #define csJNGImageIO_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csJNGImageIO) 
  #endif

class csjngimg
{
SCF_REGISTER_STATIC_LIBRARY(csjngimg,metainfo_csjngimg)
  #ifndef csJNGImageIO_FACTORY_REGISTERED 
  #define csJNGImageIO_FACTORY_REGISTERED 
    csJNGImageIO_StaticInit csJNGImageIO_static_init__; 
  #endif
public:
 csjngimg();
};
csjngimg::csjngimg() {}

}