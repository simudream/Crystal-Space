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
static char const metainfo_csopcode[] =
"<?xml version=\"1.0\"?>"
"<!-- csopcode.csplugin -->"
"<plugin>"
"  <scf>"
"    <classes>"
"      <class>"
"        <name>crystalspace.collisiondetection.opcode</name>"
"        <implementation>csOPCODECollideSystem</implementation>"
"        <description>Crystal Space OPCODE CD System</description>"
"      </class>"
"      <class>"
"        <name>crystalspace.mesh.object.terrain2.collider</name>"
"        <implementation>csTerrainCollider</implementation>"
"        <description>Terrain collider</description>"
"      </class>"
"    </classes>"
"  </scf>"
"</plugin>"
;
  #ifndef csOPCODECollideSystem_FACTORY_REGISTER_DEFINED 
  #define csOPCODECollideSystem_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csOPCODECollideSystem) 
  #endif
  #ifndef csTerrainCollider_FACTORY_REGISTER_DEFINED 
  #define csTerrainCollider_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csTerrainCollider) 
  #endif

class csopcode
{
SCF_REGISTER_STATIC_LIBRARY(csopcode,metainfo_csopcode)
  #ifndef csOPCODECollideSystem_FACTORY_REGISTERED 
  #define csOPCODECollideSystem_FACTORY_REGISTERED 
    csOPCODECollideSystem_StaticInit csOPCODECollideSystem_static_init__; 
  #endif
  #ifndef csTerrainCollider_FACTORY_REGISTERED 
  #define csTerrainCollider_FACTORY_REGISTERED 
    csTerrainCollider_StaticInit csTerrainCollider_static_init__; 
  #endif
public:
 csopcode();
};
csopcode::csopcode() {}

}
