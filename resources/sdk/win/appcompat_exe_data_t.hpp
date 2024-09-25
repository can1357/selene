#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/sdbqueryresult_t.hpp"
#include "../tag/switch_context_t.hpp"
#include "../sdb/cstruct_cobalt_procflag_t.hpp"

#include "magic/appcompat_exe_data_t.start.hpp"
namespace win
{
    // [struct _APPCOMPAT_EXE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct appcompat_exe_data_t                                                      
    {                                                                                
        using switch_context_t = sdk::variant<sdk::array<uint64_t, 128>, struct tag::switch_context_t>;                                 
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                           
        _m000 uint32_t                              cb_size;                           //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .cbSize
        _m001 uint32_t                              dw_magic;                          //{ +0x020c    +0x020c    +0x020c    +0x020c    } | .dwMagic
        _m002 uint16_t                              u_exe_type;                        //{ +0x0210    +0x0214    +0x0214    +0x0214    } | .uExeType
        _m003 struct tag::sdbqueryresult_t          sdb_query_result;                  //{ +0x0214    +0x0218    +0x0218    +0x0218    } | .SdbQueryResult
        _m004 sdk::array<uint64_t, 128>             dbg_log_channels;                  //{ +0x03e0    +0x03e0    +0x03e0    +0x03e0    } | .DbgLogChannels
        _m005 switch_context_t                      switch_context;                    //{ +0x07e0    +0x07e0    +0x07e0    +0x07e0    } | .SwitchContext
        _m006 uint32_t                              dw_parent_process_id;              //{ +0x0be4    +0x0b38    +0x0b38    +0x0b38    } | .dwParentProcessId
        _m007 sdk::array<wchar_t, 260>              sz_parent_image_name;              //{ +0x0be8    +0x0b3c    +0x0b3c    +0x0b3c    } | .szParentImageName
        _m008 sdk::array<wchar_t, 256>              sz_parent_compat_layers;           //{ +0x0df0    +0x0d44    +0x0d44    +0x0d44    } | .szParentCompatLayers
        _m009 sdk::array<wchar_t, 256>              sz_active_compat_layers;           //{ +0x0ff0    +0x0f44    +0x0f44    +0x0f44    } | .szActiveCompatLayers
        _m010 uint32_t                              u_image_file_size;                 //{ +0x11fc    +0x1144    +0x1144    +0x1144    } | .uImageFileSize
        _m011 uint32_t                              u_image_check_sum;                 //{ +0x1200    +0x1148    +0x1148    +0x1148    } | .uImageCheckSum
        _m012 int32_t                               b_latest_os;                       //{ +0x1208    +0x114c    +0x114c    +0x114c    } | .bLatestOs
        _m013 int32_t                               b_package_id;                      //{ +0x120c    +0x1150    +0x1150    +0x1150    } | .bPackageId
        _m014 int32_t                               b_switch_back_manifest;            //{ +0x1210    +0x1154    +0x1154    +0x1154    } | .bSwitchBackManifest
        _m015 int32_t                               b_uac_manifest;                    //{ +0x1214    +0x1158    +0x1158    +0x1158    } | .bUacManifest
        _m016 int32_t                               b_legacy_installer;                //{ +0x1218    +0x115c    +0x115c    +0x115c    } | .bLegacyInstaller
        _m017 uint32_t                              dw_run_level;                      //{ +0x1220    +0x1160    +0x1160    +0x1160    } | .dwRunLevel
        _m018 uint64_t                              qw_win_rt_flags;                   //{ +0x1238    +0x1168    +0x1168    +0x1168    } | .qwWinRTFlags
        _m019 void*                                 p_hook_com;                        //{ +0x1248    +0x1170    +0x1170    +0x1170    } | .pHookCOM
        _m020 void*                                 p_component_on_demand_event;       //{ +0x1250    +0x1178    +0x1178    +0x1178    } | .pComponentOnDemandEvent
        _m021 void*                                 p_quirks;                          //{ +0x1258    +0x1180    +0x1180    +0x1180    } | .pQuirks
        _m022 uint32_t                              ul_quirks_size;                    //{ +0x1260    +0x1188    +0x1188    +0x1188    } | .ulQuirksSize
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                           
        _m023 int32_t                               b_load_shim_engine;                //{ +0x0210    +0x0210    +0x0210    } | .bLoadShimEngine
        _m024 struct sdb::cstruct_cobalt_procflag_t cobalt_proc_flags;                 //{ +0x1190    +0x1190    +0x1190    } | .CobaltProcFlags
        _m025 uint32_t                              full_match_db_size_cb;             //{ +0x11b8    +0x11b8    +0x11b8    } | .FullMatchDbSizeCb
        _m026 uint32_t                              full_match_db_offset;              //{ +0x11bc    +0x11bc    +0x11bc    } | .FullMatchDbOffset
                                                                                     
        // Windows 10 v1607                                                          
        //                                                                           
        _m027 sdk::array<wchar_t, 260>              sz_shim_engine;                    //{ +0x0000    } | .szShimEngine
        _m028 uint16_t                              u_parent_exe_type;                 //{ +0x0be0    } | .uParentExeType
        _m029 uint32_t                              ul_sub_system_type;                //{ +0x11f0    } | .ulSubSystemType
        _m030 uint16_t                              u_sub_system_minor_version;        //{ +0x11f4    } | .uSubSystemMinorVersion
        _m031 uint16_t                              u_sub_system_major_version;        //{ +0x11f6    } | .uSubSystemMajorVersion
        _m032 uint16_t                              u_minor_operating_system_version;  //{ +0x11f8    } | .uMinorOperatingSystemVersion
        _m033 uint16_t                              u_major_operating_system_version;  //{ +0x11fa    } | .uMajorOperatingSystemVersion
        _m034 uint32_t                              dw_reason;                         //{ +0x1204    } | .dwReason
        _m035 int32_t                               b_system;                          //{ +0x121c    } | .bSystem
        _m036 uint32_t                              dw_elevation_reason;               //{ +0x1224    } | .dwElevationReason
        _m037 uint32_t                              dw_elevation_flags;                //{ +0x1228    } | .dwElevationFlags
        _m038 uint32_t                              dw_installer_flags;                //{ +0x122c    } | .dwInstallerFlags
        _m039 uint32_t                              ul_sampling_flag;                  //{ +0x1230    } | .ulSamplingFlag
        _m040 void*                                 p_ami_store_handle;                //{ +0x1240    } | .pAmiStoreHandle
                                                                                     
        SDK_MAGIC_PROPERTIES( "_APPCOMPAT_EXE_DATA.$", 0x11c0, true, 0xb6f9071e441d6118 );                                 
        SDK_DYNAMIC_SIZE( appcompat_exe_data_t );                                    
    };                                                                               
};
#include "magic/appcompat_exe_data_t.end.hpp"
