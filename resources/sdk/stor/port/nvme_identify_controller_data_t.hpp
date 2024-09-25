#pragma once
#include <sdkgen/support_library.hpp>
#include "nvme_power_state_desc_t.hpp"

#include "magic/nvme_identify_controller_data_t.start.hpp"
namespace stor::port
{
    // [struct NVME_IDENTIFY_CONTROLLER_DATA]
    // => Windows 11
    //
    struct nvme_identify_controller_data_t                                                 
    {                                                                                      
        struct u0_cmic_t                                                                   
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _m07 uint1_t multi_pc_ie_ports;                                                  //{ +0x0000@0  } | .MultiPCIePorts
            _m08 uint1_t multi_controllers;                                                  //{ +0x0000@1  } | .MultiControllers
            _m09 uint1_t sriov;                                                              //{ +0x0000@2  } | .SRIOV
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.CMIC.$", 0x0, false, 0x9e4e9a25db5595f4 );                                          
            SDK_FIXED_SIZE( u0_cmic_t, 0x1 );                                              
        };                                                                                 
                                                                                           
        struct u1_oaes_t                                                                   
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _m16 uint1_t namespace_attribute_changed;                                        //{ +0x0000@8  } | .NamespaceAttributeChanged
            _m17 uint1_t firmware_activation;                                                //{ +0x0000@9  } | .FirmwareActivation
            _m18 uint1_t asymmetric_access_changed;                                          //{ +0x0000@11 } | .AsymmetricAccessChanged
            _m19 uint1_t predictable_latency_aggregate_log_changed;                          //{ +0x0000@12 } | .PredictableLatencyAggregateLogChanged
            _m20 uint1_t lba_status_changed;                                                 //{ +0x0000@13 } | .LbaStatusChanged
            _m21 uint1_t endurance_group_aggregate_log_changed;                              //{ +0x0000@14 } | .EnduranceGroupAggregateLogChanged
            _m22 uint1_t zone_information;                                                   //{ +0x0000@27 } | .ZoneInformation
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.OAES.$", 0x0, false, 0x3dbbec4d985c83e3 );                                                                  
            SDK_FIXED_SIZE( u1_oaes_t, 0x4 );                                                                  
        };                                                                                 
                                                                                           
        struct u2_ctratt_t                                                                 
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _m24 uint1_t host_identifier128_bit;                                             //{ +0x0000@0  } | .HostIdentifier128Bit
            _m25 uint1_t nopsp_mode;                                                         //{ +0x0000@1  } | .NOPSPMode
            _m26 uint1_t nvm_sets;                                                           //{ +0x0000@2  } | .NVMSets
            _m27 uint1_t read_recovery_levels;                                               //{ +0x0000@3  } | .ReadRecoveryLevels
            _m28 uint1_t endurance_groups;                                                   //{ +0x0000@4  } | .EnduranceGroups
            _m29 uint1_t predictable_latency_mode;                                           //{ +0x0000@5  } | .PredictableLatencyMode
            _m30 uint1_t tbkas;                                                              //{ +0x0000@6  } | .TBKAS
            _m31 uint1_t namespace_granularity;                                              //{ +0x0000@7  } | .NamespaceGranularity
            _m32 uint1_t sq_associations;                                                    //{ +0x0000@8  } | .SQAssociations
            _m33 uint1_t uuid_list;                                                          //{ +0x0000@9  } | .UUIDList
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.$", 0x0, false, 0x23a4e512a03f68b5 );                                                 
            SDK_FIXED_SIZE( u2_ctratt_t, 0x4 );                                                 
        };                                                                                 
                                                                                           
        struct u3_rrls_t                                                                   
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _m35 uint1_t read_recovery_level0;                                               //{ +0x0000@0  } | .ReadRecoveryLevel0
            _m36 uint1_t read_recovery_level1;                                               //{ +0x0000@1  } | .ReadRecoveryLevel1
            _m37 uint1_t read_recovery_level2;                                               //{ +0x0000@2  } | .ReadRecoveryLevel2
            _m38 uint1_t read_recovery_level3;                                               //{ +0x0000@3  } | .ReadRecoveryLevel3
            _m39 uint1_t read_recovery_level4;                                               //{ +0x0000@4  } | .ReadRecoveryLevel4
            _m40 uint1_t read_recovery_level5;                                               //{ +0x0000@5  } | .ReadRecoveryLevel5
            _m41 uint1_t read_recovery_level6;                                               //{ +0x0000@6  } | .ReadRecoveryLevel6
            _m42 uint1_t read_recovery_level7;                                               //{ +0x0000@7  } | .ReadRecoveryLevel7
            _m43 uint1_t read_recovery_level8;                                               //{ +0x0000@8  } | .ReadRecoveryLevel8
            _m44 uint1_t read_recovery_level9;                                               //{ +0x0000@9  } | .ReadRecoveryLevel9
            _m45 uint1_t read_recovery_level10;                                              //{ +0x0000@10 } | .ReadRecoveryLevel10
            _m46 uint1_t read_recovery_level11;                                              //{ +0x0000@11 } | .ReadRecoveryLevel11
            _m47 uint1_t read_recovery_level12;                                              //{ +0x0000@12 } | .ReadRecoveryLevel12
            _m48 uint1_t read_recovery_level13;                                              //{ +0x0000@13 } | .ReadRecoveryLevel13
            _m49 uint1_t read_recovery_level14;                                              //{ +0x0000@14 } | .ReadRecoveryLevel14
            _m50 uint1_t read_recovery_level15;                                              //{ +0x0000@15 } | .ReadRecoveryLevel15
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.$", 0x0, false, 0x5f79ec61b366ff84 );                                              
            SDK_FIXED_SIZE( u3_rrls_t, 0x2 );                                              
        };                                                                                 
                                                                                           
        struct u4_oacs_t                                                                   
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _m59 uint1_t security_commands;                                                  //{ +0x0000@0  } | .SecurityCommands
            _m60 uint1_t format_nvm;                                                         //{ +0x0000@1  } | .FormatNVM
            _m61 uint1_t firmware_commands;                                                  //{ +0x0000@2  } | .FirmwareCommands
            _m62 uint1_t namespace_commands;                                                 //{ +0x0000@3  } | .NamespaceCommands
            _m63 uint1_t device_self_test;                                                   //{ +0x0000@4  } | .DeviceSelfTest
            _m64 uint1_t directives;                                                         //{ +0x0000@5  } | .Directives
            _m65 uint1_t nv_me_mi_commands;                                                  //{ +0x0000@6  } | .NVMeMICommands
            _m66 uint1_t virtualization_mgmt;                                                //{ +0x0000@7  } | .VirtualizationMgmt
            _m67 uint1_t door_bell_buffer_config;                                            //{ +0x0000@8  } | .DoorBellBufferConfig
            _m68 uint1_t get_lba_status;                                                     //{ +0x0000@9  } | .GetLBAStatus
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.OACS.$", 0x0, false, 0x12aab8ea4b46c626 );                                                
            SDK_FIXED_SIZE( u4_oacs_t, 0x2 );                                                
        };                                                                                 
                                                                                           
        struct u5_frmw_t                                                                   
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _m72 uint1_t slot1_read_only;                                                    //{ +0x0000@0  } | .Slot1ReadOnly
            _m73 uint3_t slot_count;                                                         //{ +0x0000@1  } | .SlotCount
            _m74 uint1_t activation_without_reset;                                           //{ +0x0000@4  } | .ActivationWithoutReset
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.FRMW.$", 0x0, false, 0x7e6f5d792d633d3d );                                                 
            SDK_FIXED_SIZE( u5_frmw_t, 0x1 );                                                 
        };                                                                                 
                                                                                           
        struct u6_lpa_t                                                                    
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _m76 uint1_t smart_page_per_namespace;                                           //{ +0x0000@0  } | .SmartPagePerNamespace
            _m77 uint1_t command_effects_log;                                                //{ +0x0000@1  } | .CommandEffectsLog
            _m78 uint1_t log_page_extended_data;                                             //{ +0x0000@2  } | .LogPageExtendedData
            _m79 uint1_t telemetry_support;                                                  //{ +0x0000@3  } | .TelemetrySupport
            _m80 uint1_t persistent_event_log;                                               //{ +0x0000@4  } | .PersistentEventLog
            _m81 uint1_t telemetry_data_area4;                                               //{ +0x0000@6  } | .TelemetryDataArea4
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.LPA.$", 0x0, false, 0x8b6e7df98c5ba3e4 );                                                 
            SDK_FIXED_SIZE( u6_lpa_t, 0x1 );                                                 
        };                                                                                 
                                                                                           
        struct u7_avscc_t                                                                  
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _m85 uint1_t command_format_in_spec;                                             //{ +0x0000@0  } | .CommandFormatInSpec
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.AVSCC.$", 0x0, false, 0x915fdcb028d53a1 );                                               
            SDK_FIXED_SIZE( u7_avscc_t, 0x1 );                                               
        };                                                                                 
                                                                                           
        struct u8_apsta_t                                                                  
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _m87 uint1_t supported;                                                          //{ +0x0000@0  } | .Supported
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.APSTA.$", 0x0, false, 0x43f82bda76528ada );                                  
            SDK_FIXED_SIZE( u8_apsta_t, 0x1 );                                             
        };                                                                                 
                                                                                           
        struct u9_rpmbs_t                                                                  
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _m96 uint3_t rpmb_unit_count;                                                    //{ +0x0000@0  } | .RPMBUnitCount
            _m97 uint3_t authentication_method;                                              //{ +0x0000@3  } | .AuthenticationMethod
            _m98 uint8_t total_size;                                                         //{ +0x0000@16 } | .TotalSize
            _m99 uint8_t access_size;                                                        //{ +0x0000@24 } | .AccessSize
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.RPMBS.$", 0x0, false, 0x589acd32740f587e );                                              
            SDK_FIXED_SIZE( u9_rpmbs_t, 0x4 );                                              
        };                                                                                 
                                                                                           
        struct u10_hctma_t                                                                 
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n05 uint1_t supported;                                                          //{ +0x0000@0  } | .Supported
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.HCTMA.$", 0x0, false, 0x91de6d2691987cf );                                  
            SDK_FIXED_SIZE( u10_hctma_t, 0x2 );                                            
        };                                                                                 
                                                                                           
        struct u11_sanicap_t                                                               
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n09 uint1_t crypto_erase;                                                       //{ +0x0000@0  } | .CryptoErase
            _n10 uint1_t block_erase;                                                        //{ +0x0000@1  } | .BlockErase
            _n11 uint1_t overwrite;                                                          //{ +0x0000@2  } | .Overwrite
            _n12 uint1_t ndi;                                                                //{ +0x0000@29 } | .NDI
            _n13 uint2_t nodmmas;                                                            //{ +0x0000@30 } | .NODMMAS
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.SANICAP.$", 0x0, false, 0x9e05c1d6a1d9ea54 );                                     
            SDK_FIXED_SIZE( u11_sanicap_t, 0x4 );                                          
        };                                                                                 
                                                                                           
        struct u12_anacap_t                                                                
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n20 uint1_t optimized_state;                                                    //{ +0x0000@0  } | .OptimizedState
            _n21 uint1_t non_optimized_state;                                                //{ +0x0000@1  } | .NonOptimizedState
            _n22 uint1_t inaccessible_state;                                                 //{ +0x0000@2  } | .InaccessibleState
            _n23 uint1_t persistent_loss_state;                                              //{ +0x0000@3  } | .PersistentLossState
            _n24 uint1_t change_state;                                                       //{ +0x0000@4  } | .ChangeState
            _n25 uint1_t static_anagrpid;                                                    //{ +0x0000@6  } | .StaticANAGRPID
            _n26 uint1_t support_non_zero_anagrpid;                                          //{ +0x0000@7  } | .SupportNonZeroANAGRPID
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.ANACAP.$", 0x0, false, 0x206d41d4e6a75219 );                                                  
            SDK_FIXED_SIZE( u12_anacap_t, 0x1 );                                                  
        };                                                                                 
                                                                                           
        struct u13_sqes_t                                                                  
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n31 uint4_t required_entry_size;                                                //{ +0x0000@0  } | .RequiredEntrySize
            _n32 uint4_t max_entry_size;                                                     //{ +0x0000@4  } | .MaxEntrySize
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.SQES.$", 0x0, false, 0x5b15c494e8fa0c52 );                                            
            SDK_FIXED_SIZE( u13_sqes_t, 0x1 );                                             
        };                                                                                 
                                                                                           
        struct u14_cqes_t                                                                  
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n34 uint4_t required_entry_size;                                                //{ +0x0000@0  } | .RequiredEntrySize
            _n35 uint4_t max_entry_size;                                                     //{ +0x0000@4  } | .MaxEntrySize
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.CQES.$", 0x0, false, 0x14595818236eca97 );                                            
            SDK_FIXED_SIZE( u14_cqes_t, 0x1 );                                             
        };                                                                                 
                                                                                           
        struct u14_oncs_t                                                                  
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n39 uint1_t compare;                                                            //{ +0x0000@0  } | .Compare
            _n40 uint1_t write_uncorrectable;                                                //{ +0x0000@1  } | .WriteUncorrectable
            _n41 uint1_t dataset_management;                                                 //{ +0x0000@2  } | .DatasetManagement
            _n42 uint1_t write_zeroes;                                                       //{ +0x0000@3  } | .WriteZeroes
            _n43 uint1_t feature_field;                                                      //{ +0x0000@4  } | .FeatureField
            _n44 uint1_t reservations;                                                       //{ +0x0000@5  } | .Reservations
            _n45 uint1_t timestamp;                                                          //{ +0x0000@6  } | .Timestamp
            _n46 uint1_t verify;                                                             //{ +0x0000@7  } | .Verify
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.ONCS.$", 0x0, false, 0x26ad4cea5bf09d87 );                                            
            SDK_FIXED_SIZE( u14_oncs_t, 0x2 );                                             
        };                                                                                 
                                                                                           
        struct u15_fuses_t                                                                 
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n48 uint1_t compare_and_write;                                                  //{ +0x0000@0  } | .CompareAndWrite
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.FUSES.$", 0x0, false, 0xe2b1f4b0f81ac3d1 );                                          
            SDK_FIXED_SIZE( u15_fuses_t, 0x2 );                                            
        };                                                                                 
                                                                                           
        struct u16_fna_t                                                                   
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n50 uint1_t format_apply_to_all;                                                //{ +0x0000@0  } | .FormatApplyToAll
            _n51 uint1_t secure_erase_apply_to_all;                                          //{ +0x0000@1  } | .SecureEraseApplyToAll
            _n52 uint1_t cryptographic_erase_supported;                                      //{ +0x0000@2  } | .CryptographicEraseSupported
            _n53 uint1_t format_support_nsid_all_f;                                          //{ +0x0000@3  } | .FormatSupportNSIDAllF
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.FNA.$", 0x0, false, 0xb09db219c80509a9 );                                                      
            SDK_FIXED_SIZE( u16_fna_t, 0x1 );                                                      
        };                                                                                 
                                                                                           
        struct u17_vwc_t                                                                   
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n55 uint1_t present;                                                            //{ +0x0000@0  } | .Present
            _n56 uint2_t flush_behavior;                                                     //{ +0x0000@1  } | .FlushBehavior
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.VWC.$", 0x0, false, 0xdcbca0dbcf6e36fc );                                       
            SDK_FIXED_SIZE( u17_vwc_t, 0x1 );                                              
        };                                                                                 
                                                                                           
        struct u18_nvscc_t                                                                 
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n60 uint1_t command_format_in_spec;                                             //{ +0x0000@0  } | .CommandFormatInSpec
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.NVSCC.$", 0x0, false, 0xcd039499c3e05642 );                                               
            SDK_FIXED_SIZE( u18_nvscc_t, 0x1 );                                               
        };                                                                                 
                                                                                           
        struct u18_nwpc_t                                                                  
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n62 uint1_t write_protect;                                                      //{ +0x0000@0  } | .WriteProtect
            _n63 uint1_t until_power_cycle;                                                  //{ +0x0000@1  } | .UntilPowerCycle
            _n64 uint1_t permanent;                                                          //{ +0x0000@2  } | .Permanent
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.NWPC.$", 0x0, false, 0x32498c5822e110fa );                                          
            SDK_FIXED_SIZE( u18_nwpc_t, 0x1 );                                             
        };                                                                                 
                                                                                           
        struct u19_sgls_t                                                                  
        {                                                                                  
            // Windows 11                                                                  
            //                                                                             
            _n67 uint2_t sgl_supported;                                                      //{ +0x0000@0  } | .SGLSupported
            _n68 uint1_t keyed_sgl_data;                                                     //{ +0x0000@2  } | .KeyedSGLData
            _n69 uint1_t bit_bucket_descr_supported;                                         //{ +0x0000@16 } | .BitBucketDescrSupported
            _n70 uint1_t byte_aligned_contiguous_physical_buffer;                            //{ +0x0000@17 } | .ByteAlignedContiguousPhysicalBuffer
            _n71 uint1_t sgl_length_larger_than_data_length;                                 //{ +0x0000@18 } | .SGLLengthLargerThanDataLength
            _n72 uint1_t mptrsgl_descriptor;                                                 //{ +0x0000@19 } | .MPTRSGLDescriptor
            _n73 uint1_t address_field_sgl_data_block;                                       //{ +0x0000@20 } | .AddressFieldSGLDataBlock
            _n74 uint1_t transport_sgl_data;                                                 //{ +0x0000@21 } | .TransportSGLData
                                                                                           
            SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.SGLS.$", 0x0, false, 0xfd8a0005bc1d44a4 );                                                                
            SDK_FIXED_SIZE( u19_sgls_t, 0x4 );                                                                
        };                                                                                 
                                                                                           
        using pds_t = sdk::array<struct stor::port::nvme_power_state_desc_t, 32>;                        
                                                                                           
        // Windows 11                                                                      
        //                                                                                 
        _m000 uint16_t                                             vid;                      //{ +0x0000    } | .VID
        _m001 uint16_t                                             ssvid;                    //{ +0x0002    } | .SSVID
        _m002 sdk::array<uint8_t, 20>                              sn;                       //{ +0x0004    } | .SN
        _m003 sdk::array<uint8_t, 40>                              mn;                       //{ +0x0018    } | .MN
        _m004 sdk::array<uint8_t, 8>                               fr;                       //{ +0x0040    } | .FR
        _m005 uint8_t                                              rab;                      //{ +0x0048    } | .RAB
        _m006 sdk::array<uint8_t, 3>                               ieee;                     //{ +0x0049    } | .IEEE
        _m010 u0_cmic_t                                            cmic;                     //{ +0x004c    } | .CMIC
        _m011 uint8_t                                              mdts;                     //{ +0x004d    } | .MDTS
        _m012 uint16_t                                             cntlid;                   //{ +0x004e    } | .CNTLID
        _m013 uint32_t                                             ver;                      //{ +0x0050    } | .VER
        _m014 uint32_t                                             rtd3r;                    //{ +0x0054    } | .RTD3R
        _m015 uint32_t                                             rtd3e;                    //{ +0x0058    } | .RTD3E
        _m023 u1_oaes_t                                            oaes;                     //{ +0x005c    } | .OAES
        _m034 u2_ctratt_t                                          ctratt;                   //{ +0x0060    } | .CTRATT
        _m051 u3_rrls_t                                            rrls;                     //{ +0x0064    } | .RRLS
        _m052 uint8_t                                              cntrltype;                //{ +0x006f    } | .CNTRLTYPE
        _m053 sdk::array<uint8_t, 16>                              fguid;                    //{ +0x0070    } | .FGUID
        _m054 uint16_t                                             crdt1;                    //{ +0x0080    } | .CRDT1
        _m055 uint16_t                                             crdt2;                    //{ +0x0082    } | .CRDT2
        _m056 uint16_t                                             crdt3;                    //{ +0x0084    } | .CRDT3
        _m057 sdk::array<uint8_t, 106>                             reserved0_1;              //{ +0x0086    } | .Reserved0_1
        _m058 sdk::array<uint8_t, 16>                              reserved_for_management;  //{ +0x00f0    } | .ReservedForManagement
        _m069 u4_oacs_t                                            oacs;                     //{ +0x0100    } | .OACS
        _m070 uint8_t                                              acl;                      //{ +0x0102    } | .ACL
        _m071 uint8_t                                              aerl;                     //{ +0x0103    } | .AERL
        _m075 u5_frmw_t                                            frmw;                     //{ +0x0104    } | .FRMW
        _m082 u6_lpa_t                                             lpa;                      //{ +0x0105    } | .LPA
        _m083 uint8_t                                              elpe;                     //{ +0x0106    } | .ELPE
        _m084 uint8_t                                              npss;                     //{ +0x0107    } | .NPSS
        _m086 u7_avscc_t                                           avscc;                    //{ +0x0108    } | .AVSCC
        _m088 u8_apsta_t                                           apsta;                    //{ +0x0109    } | .APSTA
        _m089 uint16_t                                             wctemp;                   //{ +0x010a    } | .WCTEMP
        _m090 uint16_t                                             cctemp;                   //{ +0x010c    } | .CCTEMP
        _m091 uint16_t                                             mtfa;                     //{ +0x010e    } | .MTFA
        _m092 uint32_t                                             hmpre;                    //{ +0x0110    } | .HMPRE
        _m093 uint32_t                                             hmmin;                    //{ +0x0114    } | .HMMIN
        _m094 sdk::array<uint8_t, 16>                              tnvmcap;                  //{ +0x0118    } | .TNVMCAP
        _m095 sdk::array<uint8_t, 16>                              unvmcap;                  //{ +0x0128    } | .UNVMCAP
        _m100 u9_rpmbs_t                                           rpmbs;                    //{ +0x0138    } | .RPMBS
        _m101 uint16_t                                             edstt;                    //{ +0x013c    } | .EDSTT
        _m102 uint8_t                                              dsto;                     //{ +0x013e    } | .DSTO
        _m103 uint8_t                                              fwug;                     //{ +0x013f    } | .FWUG
        _m104 uint16_t                                             kas;                      //{ +0x0140    } | .KAS
        _m106 u10_hctma_t                                          hctma;                    //{ +0x0142    } | .HCTMA
        _m107 uint16_t                                             mntmt;                    //{ +0x0144    } | .MNTMT
        _m108 uint16_t                                             mxtmt;                    //{ +0x0146    } | .MXTMT
        _m114 u11_sanicap_t                                        sanicap;                  //{ +0x0148    } | .SANICAP
        _m115 uint32_t                                             hmminds;                  //{ +0x014c    } | .HMMINDS
        _m116 uint16_t                                             hmmaxd;                   //{ +0x0150    } | .HMMAXD
        _m117 uint16_t                                             nsetidmax;                //{ +0x0152    } | .NSETIDMAX
        _m118 uint16_t                                             endgidmax;                //{ +0x0154    } | .ENDGIDMAX
        _m119 uint8_t                                              anatt;                    //{ +0x0156    } | .ANATT
        _m127 u12_anacap_t                                         anacap;                   //{ +0x0157    } | .ANACAP
        _m128 uint32_t                                             anagrpmax;                //{ +0x0158    } | .ANAGRPMAX
        _m129 uint32_t                                             nanagrpid;                //{ +0x015c    } | .NANAGRPID
        _m130 uint32_t                                             pels;                     //{ +0x0160    } | .PELS
        _m133 u13_sqes_t                                           sqes;                     //{ +0x0200    } | .SQES
        _m136 u13_sqes_t                                           cqes;                     //{ +0x0201    } | .CQES
        _m137 uint16_t                                             maxcmd;                   //{ +0x0202    } | .MAXCMD
        _m138 uint32_t                                             nn;                       //{ +0x0204    } | .NN
        _m147 u14_oncs_t                                           oncs;                     //{ +0x0208    } | .ONCS
        _m149 u15_fuses_t                                          fuses;                    //{ +0x020a    } | .FUSES
        _m154 u16_fna_t                                            fna;                      //{ +0x020c    } | .FNA
        _m157 u17_vwc_t                                            vwc;                      //{ +0x020d    } | .VWC
        _m158 uint16_t                                             awun;                     //{ +0x020e    } | .AWUN
        _m159 uint16_t                                             awupf;                    //{ +0x0210    } | .AWUPF
        _m161 u7_avscc_t                                           nvscc;                    //{ +0x0212    } | .NVSCC
        _m165 u18_nwpc_t                                           nwpc;                     //{ +0x0213    } | .NWPC
        _m166 uint16_t                                             acwu;                     //{ +0x0214    } | .ACWU
        _m175 u19_sgls_t                                           sgls;                     //{ +0x0218    } | .SGLS
        _m176 uint32_t                                             mnan;                     //{ +0x021c    } | .MNAN
        _m177 sdk::array<uint8_t, 256>                             subnqn;                   //{ +0x0300    } | .SUBNQN
        _m178 pds_t                                                pds;                      //{ +0x0800    } | .PDS
        _m179 sdk::array<uint8_t, 1024>                            vs;                       //{ +0x0c00    } | .VS
                                                                                           
        SDK_MAGIC_PROPERTIES( "NVME_IDENTIFY_CONTROLLER_DATA.$", 0x0, false, 0x9ec86fe17725d439 );                        
        SDK_FIXED_SIZE( nvme_identify_controller_data_t, 0x1000 );                         
    };                                                                                     
};
#include "magic/nvme_identify_controller_data_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u0_cmic_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u1_oaes_t, 0x4 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u2_ctratt_t, 0x4 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u3_rrls_t, 0x2 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u4_oacs_t, 0x2 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u5_frmw_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u6_lpa_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u7_avscc_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u8_apsta_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u9_rpmbs_t, 0x4 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u10_hctma_t, 0x2 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u11_sanicap_t, 0x4 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u12_anacap_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u13_sqes_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u14_cqes_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u14_oncs_t, 0x2 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u15_fuses_t, 0x2 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u16_fna_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u17_vwc_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u18_nvscc_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u18_nwpc_t, 0x1 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t::u19_sgls_t, 0x4 );
SDK_VERIFY( struct stor::port::nvme_identify_controller_data_t, 0x1000 );
