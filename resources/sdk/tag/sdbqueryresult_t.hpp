#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/sdbqueryresult_t.start.hpp"
namespace tag
{
    // [struct tagSDBQUERYRESULT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sdbqueryresult_t                                      
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                       
        _m00 sdk::array<uint32_t, 16>          atr_exes;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .atrExes
        _m01 sdk::array<uint32_t, 16>          adw_exe_flags;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .adwExeFlags
        _m02 sdk::array<uint32_t, 8>           atr_layers;         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .atrLayers
        _m03 uint32_t                          dw_layer_flags;     //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .dwLayerFlags
        _m04 uint32_t                          tr_app_help;        //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .trAppHelp
        _m05 uint32_t                          dw_exe_count;       //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .dwExeCount
        _m06 uint32_t                          dw_layer_count;     //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .dwLayerCount
        _m07 struct nt::guid_t                 guid_id;            //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .guidID
        _m08 uint32_t                          dw_extra_flags;     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .dwExtraFlags
        _m09 uint32_t                          dw_custom_sdb_map;  //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .dwCustomSDBMap
        _m10 sdk::array<struct nt::guid_t, 16> rg_guid_db;         //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .rgGuidDB
                                                                 
        SDK_MAGIC_PROPERTIES( "tagSDBQUERYRESULT.$", 0x1c8, true, 0xadcb3ca3f4d3339 );                  
        SDK_FIXED_SIZE( sdbqueryresult_t, 0x1c8 );                  
    };                                                           
};
#include "magic/sdbqueryresult_t.end.hpp"
SDK_VERIFY( struct tag::sdbqueryresult_t, 0x1c8 );
