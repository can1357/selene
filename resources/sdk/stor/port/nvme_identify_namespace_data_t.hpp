#pragma once
#include <sdkgen/support_library.hpp>
#include "nvme_lba_format_t.hpp"
#include "nvm_reservation_capabilities_t.hpp"

#include "magic/nvme_identify_namespace_data_t.start.hpp"
namespace stor::port
{
    // [struct NVME_IDENTIFY_NAMESPACE_DATA]
    // => Windows 11
    //
    struct nvme_identify_namespace_data_t                               
    {                                                                   
        struct u0_nsfeat_t                                              
        {                                                               
            // Windows 11                                               
            //                                                          
            _m03 uint1_t thin_provisioning;                               //{ +0x0000@0  } | .ThinProvisioning
            _m04 uint1_t name_space_atomic_write_unit;                    //{ +0x0000@1  } | .NameSpaceAtomicWriteUnit
            _m05 uint1_t deallocated_or_unwritten_error;                  //{ +0x0000@2  } | .DeallocatedOrUnwrittenError
            _m06 uint1_t skip_reuse_ui;                                   //{ +0x0000@3  } | .SkipReuseUI
            _m07 uint1_t name_space_io_optimization;                      //{ +0x0000@4  } | .NameSpaceIoOptimization
                                                                        
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_NAMESPACE_DATA.NSFEAT.$", 0x0, false, 0xc23098656e57d311 );                                        
            SDK_FIXED_SIZE( u0_nsfeat_t, 0x1 );                                        
        };                                                              
                                                                        
        struct u1_flbas_t                                               
        {                                                               
            // Windows 11                                               
            //                                                          
            _m10 uint4_t lba_format_index;                                //{ +0x0000@0  } | .LbaFormatIndex
            _m11 uint1_t metadata_in_extended_data_lba;                   //{ +0x0000@4  } | .MetadataInExtendedDataLBA
                                                                        
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_NAMESPACE_DATA.FLBAS.$", 0x0, false, 0xaa8120b82ba0565c );                                       
            SDK_FIXED_SIZE( u1_flbas_t, 0x1 );                                       
        };                                                              
                                                                        
        struct u2_mc_t                                                  
        {                                                               
            // Windows 11                                               
            //                                                          
            _m13 uint1_t metadata_in_extended_data_lba;                   //{ +0x0000@0  } | .MetadataInExtendedDataLBA
            _m14 uint1_t metadata_in_separate_buffer;                     //{ +0x0000@1  } | .MetadataInSeparateBuffer
                                                                        
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_NAMESPACE_DATA.MC.$", 0x0, false, 0x9ae1792ae7d822cb );                                       
            SDK_FIXED_SIZE( u2_mc_t, 0x1 );                                       
        };                                                              
                                                                        
        struct u3_dpc_t                                                 
        {                                                               
            // Windows 11                                               
            //                                                          
            _m16 uint1_t protection_info_type1;                           //{ +0x0000@0  } | .ProtectionInfoType1
            _m17 uint1_t protection_info_type2;                           //{ +0x0000@1  } | .ProtectionInfoType2
            _m18 uint1_t protection_info_type3;                           //{ +0x0000@2  } | .ProtectionInfoType3
            _m19 uint1_t info_at_beginning_of_metadata;                   //{ +0x0000@3  } | .InfoAtBeginningOfMetadata
            _m20 uint1_t info_at_end_of_metadata;                         //{ +0x0000@4  } | .InfoAtEndOfMetadata
                                                                        
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_NAMESPACE_DATA.DPC.$", 0x0, false, 0x7909fb1c22bd504f );                                       
            SDK_FIXED_SIZE( u3_dpc_t, 0x1 );                                       
        };                                                              
                                                                        
        struct u4_dps_t                                                 
        {                                                               
            // Windows 11                                               
            //                                                          
            _m22 uint3_t protection_info_type_enabled;                    //{ +0x0000@0  } | .ProtectionInfoTypeEnabled
            _m23 uint1_t info_at_beginning_of_metadata;                   //{ +0x0000@3  } | .InfoAtBeginningOfMetadata
                                                                        
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_NAMESPACE_DATA.DPS.$", 0x0, false, 0x660e7ea51dcdfd41 );                                       
            SDK_FIXED_SIZE( u4_dps_t, 0x1 );                                       
        };                                                              
                                                                        
        struct u5_nmic_t                                                
        {                                                               
            // Windows 11                                               
            //                                                          
            _m25 uint1_t shared_name_space;                               //{ +0x0000@0  } | .SharedNameSpace
                                                                        
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_NAMESPACE_DATA.NMIC.$", 0x0, false, 0x76a5d362bd51caf );                           
            SDK_FIXED_SIZE( u5_nmic_t, 0x1 );                           
        };                                                              
                                                                        
        struct u6_fpi_t                                                 
        {                                                               
            // Windows 11                                               
            //                                                          
            _m28 uint7_t percentage_remained;                             //{ +0x0000@0  } | .PercentageRemained
            _m29 uint1_t supported;                                       //{ +0x0000@7  } | .Supported
                                                                        
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_NAMESPACE_DATA.FPI.$", 0x0, false, 0x361a05b38e01128a );                             
            SDK_FIXED_SIZE( u6_fpi_t, 0x1 );                             
        };                                                              
                                                                        
        struct u7_dlfeat_t                                              
        {                                                               
            // Windows 11                                               
            //                                                          
            _m31 uint3_t read_behavior;                                   //{ +0x0000@0  } | .ReadBehavior
            _m32 uint1_t write_zeroes;                                    //{ +0x0000@3  } | .WriteZeroes
            _m33 uint1_t guard_field_with_crc;                            //{ +0x0000@4  } | .GuardFieldWithCRC
                                                                        
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_NAMESPACE_DATA.DLFEAT.$", 0x0, false, 0x1dd364fa20ceed68 );                              
            SDK_FIXED_SIZE( u7_dlfeat_t, 0x1 );                              
        };                                                              
                                                                        
        struct u8_nsattr_t                                              
        {                                                               
            // Windows 11                                               
            //                                                          
            _m52 uint1_t write_protected;                                 //{ +0x0000@0  } | .WriteProtected
                                                                        
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_NAMESPACE_DATA.NSATTR.$", 0x0, false, 0x5720d53e915a111f );                         
            SDK_FIXED_SIZE( u8_nsattr_t, 0x1 );                         
        };                                                              
                                                                        
        using lbaf_t = sdk::array<union stor::port::nvme_lba_format_t, 16>;         
                                                                        
        // Windows 11                                                   
        //                                                              
        _m000 uint64_t                                         nsze;      //{ +0x0000    } | .NSZE
        _m001 uint64_t                                         ncap;      //{ +0x0008    } | .NCAP
        _m002 uint64_t                                         nuse;      //{ +0x0010    } | .NUSE
        _m008 u0_nsfeat_t                                      nsfeat;    //{ +0x0018    } | .NSFEAT
        _m009 uint8_t                                          nlbaf;     //{ +0x0019    } | .NLBAF
        _m012 u1_flbas_t                                       flbas;     //{ +0x001a    } | .FLBAS
        _m015 u2_mc_t                                          mc;        //{ +0x001b    } | .MC
        _m021 u3_dpc_t                                         dpc;       //{ +0x001c    } | .DPC
        _m024 u4_dps_t                                         dps;       //{ +0x001d    } | .DPS
        _m026 u5_nmic_t                                        nmic;      //{ +0x001e    } | .NMIC
        _m027 union stor::port::nvm_reservation_capabilities_t rescap;    //{ +0x001f    } | .RESCAP
        _m030 u6_fpi_t                                         fpi;       //{ +0x0020    } | .FPI
        _m034 u7_dlfeat_t                                      dlfeat;    //{ +0x0021    } | .DLFEAT
        _m035 uint16_t                                         nawun;     //{ +0x0022    } | .NAWUN
        _m036 uint16_t                                         nawupf;    //{ +0x0024    } | .NAWUPF
        _m037 uint16_t                                         nacwu;     //{ +0x0026    } | .NACWU
        _m038 uint16_t                                         nabsn;     //{ +0x0028    } | .NABSN
        _m039 uint16_t                                         nabo;      //{ +0x002a    } | .NABO
        _m040 uint16_t                                         nabspf;    //{ +0x002c    } | .NABSPF
        _m041 uint16_t                                         noiob;     //{ +0x002e    } | .NOIOB
        _m042 sdk::array<uint8_t, 16>                          nvmcap;    //{ +0x0030    } | .NVMCAP
        _m043 uint16_t                                         npwg;      //{ +0x0040    } | .NPWG
        _m044 uint16_t                                         npwa;      //{ +0x0042    } | .NPWA
        _m045 uint16_t                                         npdg;      //{ +0x0044    } | .NPDG
        _m046 uint16_t                                         npda;      //{ +0x0046    } | .NPDA
        _m047 uint16_t                                         nows;      //{ +0x0048    } | .NOWS
        _m048 uint16_t                                         mssrl;     //{ +0x004a    } | .MSSRL
        _m049 uint32_t                                         mcl;       //{ +0x004c    } | .MCL
        _m050 uint8_t                                          msrc;      //{ +0x0050    } | .MSRC
        _m051 uint32_t                                         anagrpid;  //{ +0x005c    } | .ANAGRPID
        _m053 u8_nsattr_t                                      nsattr;    //{ +0x0063    } | .NSATTR
        _m054 uint16_t                                         nvmsetid;  //{ +0x0064    } | .NVMSETID
        _m055 uint16_t                                         endgid;    //{ +0x0066    } | .ENDGID
        _m056 sdk::array<uint8_t, 16>                          nguid;     //{ +0x0068    } | .NGUID
        _m057 sdk::array<uint8_t, 8>                           eui64;     //{ +0x0078    } | .EUI64
        _m058 lbaf_t                                           lbaf;      //{ +0x0080    } | .LBAF
        _m059 sdk::array<uint8_t, 3712>                        vs;        //{ +0x0180    } | .VS
                                                                        
        SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_NAMESPACE_DATA.$", 0x0, false, 0xd60466d10b852d70 );         
        SDK_FIXED_SIZE( nvme_identify_namespace_data_t, 0x1000 );         
    };                                                                  
};
#include "magic/nvme_identify_namespace_data_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_identify_namespace_data_t::u0_nsfeat_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_namespace_data_t::u1_flbas_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_namespace_data_t::u2_mc_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_namespace_data_t::u3_dpc_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_namespace_data_t::u4_dps_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_namespace_data_t::u5_nmic_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_namespace_data_t::u6_fpi_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_namespace_data_t::u7_dlfeat_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_namespace_data_t::u8_nsattr_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_namespace_data_t, 0x1000 );
