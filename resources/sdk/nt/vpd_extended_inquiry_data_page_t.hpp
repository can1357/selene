#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_extended_inquiry_data_page_t.start.hpp"
namespace nt
{
    // [struct _VPD_EXTENDED_INQUIRY_DATA_PAGE]
    // => WDK 10 (NV)
    //
    struct vpd_extended_inquiry_data_page_t                                
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m000 uint5_t                device_type;                            //{ +0x0000@0  } | .DeviceType
        _m001 uint3_t                device_type_qualifier;                  //{ +0x0000@5  } | .DeviceTypeQualifier
        _m002 uint8_t                page_code;                              //{ +0x0001    } | .PageCode
        _m003 sdk::array<uint8_t, 2> page_length;                            //{ +0x0002    } | .PageLength
        _m004 uint1_t                ref_chk;                                //{ +0x0004@0  } | .RefChk
        _m005 uint1_t                app_chk;                                //{ +0x0004@1  } | .AppChk
        _m006 uint1_t                grd_chk;                                //{ +0x0004@2  } | .GrdChk
        _m007 uint3_t                spt;                                    //{ +0x0004@3  } | .Spt
        _m008 uint2_t                activate_microcode;                     //{ +0x0004@6  } | .ActivateMicrocode
        _m009 uint1_t                simp_sup;                               //{ +0x0005@0  } | .SimpSup
        _m010 uint1_t                ord_sup;                                //{ +0x0005@1  } | .OrdSup
        _m011 uint1_t                head_sup;                               //{ +0x0005@2  } | .HeadSup
        _m012 uint1_t                prior_sup;                              //{ +0x0005@3  } | .PriorSup
        _m013 uint1_t                group_sup;                              //{ +0x0005@4  } | .GroupSup
        _m014 uint1_t                uask_sup;                               //{ +0x0005@5  } | .UaskSup
        _m015 uint1_t                v_sup;                                  //{ +0x0006@0  } | .VSup
        _m016 uint1_t                nv_sup;                                 //{ +0x0006@1  } | .NvSup
        _m017 uint1_t                obsolete0;                              //{ +0x0006@2  } | .Obsolete0
        _m018 uint1_t                wu_sup;                                 //{ +0x0006@3  } | .WuSup
        _m019 uint1_t                lui_clr;                                //{ +0x0007@0  } | .LuiClr
        _m020 uint1_t                pii_sup;                                //{ +0x0007@4  } | .PiiSup
        _m021 uint1_t                no_pi_chk;                              //{ +0x0007@5  } | .NoPiChk
        _m022 uint1_t                obsolete1;                              //{ +0x0008@0  } | .Obsolete1
        _m023 uint1_t                hss_relef;                              //{ +0x0008@1  } | .HssRelef
        _m024 uint1_t                rtd_sup;                                //{ +0x0008@3  } | .RtdSup
        _m025 uint1_t                r_sup;                                  //{ +0x0008@4  } | .RSup
        _m026 uint3_t                lu_collection_type;                     //{ +0x0008@5  } | .LuCollectionType
        _m027 uint4_t                multi_i_t_nexus_microcode_download;     //{ +0x0009@0  } | .Multi_i_t_Nexus_Microcode_Download
        _m028 sdk::array<uint8_t, 2> extended_self_test_completion_minutes;  //{ +0x000a    } | .ExtendedSelfTestCompletionMinutes
        _m029 uint1_t                vsa_sup;                                //{ +0x000c@5  } | .VsaSup
        _m030 uint1_t                hra_sup;                                //{ +0x000c@6  } | .HraSup
        _m031 uint1_t                poa_sup;                                //{ +0x000c@7  } | .PoaSup
        _m032 uint8_t                max_supported_sense_data_length;        //{ +0x000d    } | .MaxSupportedSenseDataLength
        _m033 uint1_t                nrd0;                                   //{ +0x000e@0  } | .Nrd0
        _m034 uint1_t                nrd1;                                   //{ +0x000e@1  } | .Nrd1
        _m035 uint1_t                sac;                                    //{ +0x000e@2  } | .Sac
        _m036 uint1_t                ias;                                    //{ +0x000e@6  } | .Ias
        _m037 uint1_t                ibs;                                    //{ +0x000e@7  } | .Ibs
        _m038 sdk::array<uint8_t, 2> max_inquiry_change_logs;                //{ +0x000f    } | .MaxInquiryChangeLogs
        _m039 sdk::array<uint8_t, 2> max_mode_page_change_logs;              //{ +0x0011    } | .MaxModePageChangeLogs
                                                                           
        SDK_NONVOL_PROPERTIES( "_VPD_EXTENDED_INQUIRY_DATA_PAGE.$", 0x0, false, 0x424f167140a4cf0f );                                      
        SDK_FIXED_SIZE( vpd_extended_inquiry_data_page_t, 0x40 );                                      
    };                                                                     
};
#include "magic/vpd_extended_inquiry_data_page_t.end.hpp"
SDK_VERIFY( struct nt::vpd_extended_inquiry_data_page_t, 0x40 );
