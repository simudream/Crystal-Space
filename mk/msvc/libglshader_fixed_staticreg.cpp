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
static char const metainfo_glshader_fixed[] =
"<?xml version=\"1.0\"?>"
"<!-- glshader_fixed.csplugin -->"
"<plugin>"
"  <scf>"
"    <classes>"
"      <class>"
"        <name>crystalspace.graphics3d.shader.glfixed</name>"
"        <implementation>csGLShader_FIXED</implementation>"
"        <description>OpenGL fixed function shader provider for Render3D</description>"
"      </class>"
"    </classes>"
"  </scf>"
"</plugin>"
;
  #ifndef csGLShader_FIXED_FACTORY_REGISTER_DEFINED 
  #define csGLShader_FIXED_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csGLShader_FIXED) 
  #endif

class glshader_fixed
{
SCF_REGISTER_STATIC_LIBRARY(glshader_fixed,metainfo_glshader_fixed)
  #ifndef csGLShader_FIXED_FACTORY_REGISTERED 
  #define csGLShader_FIXED_FACTORY_REGISTERED 
    csGLShader_FIXED_StaticInit csGLShader_FIXED_static_init__; 
  #endif
public:
 glshader_fixed();
};
glshader_fixed::glshader_fixed() {}

}
