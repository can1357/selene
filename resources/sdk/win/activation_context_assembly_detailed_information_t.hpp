#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activation_context_assembly_detailed_information_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_assembly_detailed_information_t     
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                        
        _m00 uint32_t       ul_flags;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulFlags
        _m01 uint32_t       ul_encoded_assembly_identity_length;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulEncodedAssemblyIdentityLength
        _m02 uint32_t       ul_manifest_path_type;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulManifestPathType
        _m03 uint32_t       ul_manifest_path_length;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ulManifestPathLength
        _m04 int64_t        li_manifest_last_write_time;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .liManifestLastWriteTime
        _m05 uint32_t       ul_policy_path_type;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ulPolicyPathType
        _m06 uint32_t       ul_policy_path_length;                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ulPolicyPathLength
        _m07 int64_t        li_policy_last_write_time;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .liPolicyLastWriteTime
        _m08 uint32_t       ul_metadata_satellite_roster_index;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ulMetadataSatelliteRosterIndex
        _m09 uint32_t       ul_manifest_version_major;              //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ulManifestVersionMajor
        _m10 uint32_t       ul_manifest_version_minor;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ulManifestVersionMinor
        _m11 uint32_t       ul_policy_version_major;                //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ulPolicyVersionMajor
        _m12 uint32_t       ul_policy_version_minor;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ulPolicyVersionMinor
        _m13 uint32_t       ul_assembly_directory_name_length;      //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .ulAssemblyDirectoryNameLength
        _m14 const wchar_t* lp_assembly_encoded_assembly_identity;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .lpAssemblyEncodedAssemblyIdentity
        _m15 const wchar_t* lp_assembly_manifest_path;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .lpAssemblyManifestPath
        _m16 const wchar_t* lp_assembly_policy_path;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .lpAssemblyPolicyPath
        _m17 const wchar_t* lp_assembly_directory_name;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .lpAssemblyDirectoryName
        _m18 uint32_t       ul_file_count;                          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ulFileCount
                                                                  
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION.$", 0x68, true, 0xcc733c1a9fc7f413 );                                      
        SDK_FIXED_SIZE( activation_context_assembly_detailed_information_t, 0x68 );                                      
    };                                                            
};
#include "magic/activation_context_assembly_detailed_information_t.end.hpp"
SDK_VERIFY( struct win::activation_context_assembly_detailed_information_t, 0x68 );
