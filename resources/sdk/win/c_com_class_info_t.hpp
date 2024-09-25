#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "key_refresh_info_t.hpp"
#include "registration_source_t.hpp"
#include "../tag/local_server_type_t.hpp"

#include "magic/c_com_class_info_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [class CComClassInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_com_class_info_t                                                                  
    {                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                    
        _m000 const enum win::registration_source_t m_source;                                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_source
        _m001 int32_t                               m_c_ref;                                    //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .m_cRef
        _m002 int32_t                               m_c_locks;                                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .m_cLocks
        _m003 struct nt::guid_t                     m_clsid;                                    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .m_clsid
        _m004 struct nt::guid_t                     m_guid_process_id;                          //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .m_guidProcessId
        _m005 enum tag::local_server_type_t         m_server_type;                              //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .m_serverType
        _m006 struct win::i_unknown_t*              m_p_process_info;                           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_pProcessInfo
        _m007 sdk::array<wchar_t, 45>               m_wsz_clsid_string;                         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_wszClsidString
        _m008 wchar_t*                              m_pwsz_progid;                              //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .m_pwszProgid
        _m009 wchar_t*                              m_pwsz_class_name;                          //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_pwszClassName
        _m010 int32_t                               m_clsctx;                                   //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .m_clsctx
        _m011 int32_t                               m_threadingmodel;                           //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .m_threadingmodel
        _m012 uint32_t                              m_reg_owning_catalog;                       //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .m_regOwningCatalog
        _m013 uint32_t                              m_reg_view;                                 //{ +0x00e4    +0x00e4    +0x00e4    +0x00e4    } | .m_regView
        _m014 wchar_t*                              m_pwsz_inproc_server32;                     //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .m_pwszInprocServer32
        _m015 wchar_t*                              m_pwsz_inproc_handler32;                    //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .m_pwszInprocHandler32
        _m016 wchar_t*                              m_pwsz_local_server;                        //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .m_pwszLocalServer
        _m017 wchar_t*                              m_pwsz_inproc_server16;                     //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .m_pwszInprocServer16
        _m018 wchar_t*                              m_pwsz_inproc_handler16;                    //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .m_pwszInprocHandler16
        _m019 wchar_t*                              m_pwsz_surrogate_command;                   //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .m_pwszSurrogateCommand
        _m020 wchar_t*                              m_pwsz_server_executable;                   //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .m_pwszServerExecutable
        _m021 int32_t                               m_b_lua_enabled;                            //{ +0x0130    +0x012c    +0x012c    +0x012c    } | .m_bLUAEnabled
        _m022 int32_t                               m_b_prog_id_read;                           //{ +0x0134    +0x0130    +0x0130    +0x0130    } | .m_bProgIDRead
        _m023 wchar_t*                              m_pwsz_display_name;                        //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .m_pwszDisplayName
        _m024 wchar_t*                              m_pwsz_binary_name;                         //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .m_pwszBinaryName
        _m025 wchar_t*                              m_pwsz_icon_reference;                      //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .m_pwszIconReference
        _m026 struct win::key_refresh_info_t        m_key_refresh_info;                         //{ +0x0158    +0x0160    +0x0160    +0x0160    } | .m_keyRefreshInfo
        _m027 bool                                  m_supports_get_prog_id;                     //{ +0x0168    +0x0170    +0x0170    +0x0170    } | .m_supportsGetProgId
        _m028 uint64_t                              m_change_detection_sequence;                //{ +0x0178    +0x0180    +0x0180    +0x0180    } | .m_changeDetectionSequence
                                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                    
        _m029 uint16_t                              m_reg_wow_architecture;                     //{ +0x00e8    +0x00e8    +0x00e8    } | .m_regWowArchitecture
        _m030 uint32_t                              m_dw_outofproc_server_binary_architecture;  //{ +0x0128    +0x0128    +0x0128    } | .m_dwOutofprocServerBinaryArchitecture
        _m031 uint32_t                              m_dw_activate_on_host_flags;                //{ +0x0158    +0x0158    +0x0158    } | .m_dwActivateOnHostFlags
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                          
        //                                                                                    
        _m032 wchar_t*                              m_pwsz_package_name;                        //{ +0x0150    +0x0150    +0x0150    } | .m_pwszPackageName
                                                                                              
        // Windows 10 v1607                                                                   
        //                                                                                    
        _m033 uint16_t                              m_us_reg_view_machine_type;                 //{ +0x00e8    } | .m_usRegViewMachineType
        _m034 uint32_t                              m_dw_preferred_server_bitness;              //{ +0x0128    } | .m_dwPreferredServerBitness
        _m035 uint32_t                              m_dw_local_server32_binary_bitness;         //{ +0x012c    } | .m_dwLocalServer32BinaryBitness
                                                                                              
        // Windows 11                                                                         
        //                                                                                    
        _m036 bool                                  m_has_verified_machine_scope;               //{ +0x0188    } | .m_hasVerifiedMachineScope
                                                                                              
        SDK_MAGIC_PROPERTIES( "CComClassInfo.$", 0x188, true, 0xd676a7153cac9345 );                                          
        SDK_DYNAMIC_SIZE( c_com_class_info_t );                                               
    };                                                                                        
};
#include "magic/c_com_class_info_t.end.hpp"
