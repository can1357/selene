#pragma once
#include <sdkgen/support_library.hpp>
#include "hiber_perf_t.hpp"

#include "magic/memory_image_t.start.hpp"
namespace po
{
    // [struct PO_MEMORY_IMAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_image_t                                                  
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                 
        _m000 uint32_t                 signature;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m001 uint32_t                 image_type;                           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ImageType
        _m002 uint32_t                 check_sum;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CheckSum
        _m003 uint32_t                 length_self;                          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LengthSelf
        _m004 uint64_t                 page_self;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PageSelf
        _m005 uint32_t                 page_size;                            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PageSize
        _m006 int64_t                  system_time;                          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SystemTime
        _m007 uint64_t                 interrupt_time;                       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InterruptTime
        _m008 uint64_t                 feature_flags;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FeatureFlags
        _m009 uint8_t                  hiber_flags;                          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HiberFlags
        _m010 uint32_t                 no_hiber_ptes;                        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .NoHiberPtes
        _m011 uint64_t                 hiber_va;                             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HiberVa
        _m012 uint32_t                 no_free_pages;                        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NoFreePages
        _m013 uint32_t                 free_map_check;                       //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .FreeMapCheck
        _m014 uint32_t                 wake_check;                           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .WakeCheck
        _m015 uint64_t                 num_pages_for_loader;                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .NumPagesForLoader
        _m016 uint64_t                 first_secure_restore_page;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .FirstSecureRestorePage
        _m017 uint64_t                 first_boot_restore_page;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .FirstBootRestorePage
        _m018 uint64_t                 first_kernel_restore_page;            //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .FirstKernelRestorePage
        _m019 uint64_t                 first_checksum_restore_page;          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .FirstChecksumRestorePage
        _m020 uint64_t                 no_checksum_entries;                  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .NoChecksumEntries
        _m021 struct po::hiber_perf_t  perf_info;                            //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PerfInfo
        _m022 uint32_t                 firmware_runtime_information_pages;   //{ +0x0270    +0x0280    +0x02e8    +0x0280    } | .FirmwareRuntimeInformationPages
        _m023 sdk::array<uint64_t, 1>  firmware_runtime_information;         //{ +0x0278    +0x0288    +0x02f0    +0x0288    } | .FirmwareRuntimeInformation
        _m024 uint32_t                 no_boot_loader_log_pages;             //{ +0x0284    +0x0294    +0x02fc    +0x0294    } | .NoBootLoaderLogPages
        _m025 sdk::array<uint64_t, 24> boot_loader_log_pages;                //{ +0x0288    +0x0298    +0x0300    +0x0298    } | .BootLoaderLogPages
        _m026 uint32_t                 not_used;                             //{ +0x0348    +0x0358    +0x03c0    +0x0358    } | .NotUsed
        _m027 uint32_t                 resume_context_check;                 //{ +0x034c    +0x035c    +0x03c4    +0x035c    } | .ResumeContextCheck
        _m028 uint32_t                 resume_context_pages;                 //{ +0x0350    +0x0360    +0x03c8    +0x0360    } | .ResumeContextPages
        _m029 uint8_t                  hiberboot;                            //{ +0x0354    +0x0364    +0x03cc    +0x0364    } | .Hiberboot
        _m030 uint64_t                 hv_entry_point;                       //{ +0x0360    +0x0370    +0x03d8    +0x0370    } | .HvEntryPoint
        _m031 uint64_t                 hv_reserved_transition_address;       //{ +0x0368    +0x0378    +0x03e0    +0x0378    } | .HvReservedTransitionAddress
        _m032 uint64_t                 hv_reserved_transition_address_size;  //{ +0x0370    +0x0380    +0x03e8    +0x0380    } | .HvReservedTransitionAddressSize
        _m033 uint64_t                 boot_flags;                           //{ +0x0378    +0x0388    +0x03f0    +0x0388    } | .BootFlags
        _m034 uint64_t                 highest_physical_page;                //{ +0x0388    +0x0398    +0x0400    +0x0398    } | .HighestPhysicalPage
        _m035 sdk::array<uint64_t, 4>  bitlocker_key_pfns;                   //{ +0x0390    +0x03a0    +0x0408    +0x03a0    } | .BitlockerKeyPfns
        _m036 uint32_t                 hardware_signature;                   //{ +0x03b0    +0x03c0    +0x0428    +0x03c0    } | .HardwareSignature
        _m037 int64_t                  sm_bios_table_physical_address;       //{ +0x03b8    +0x03c8    +0x0430    +0x03c8    } | .SMBiosTablePhysicalAddress
        _m038 uint32_t                 sm_bios_table_length;                 //{ +0x03c0    +0x03d0    +0x0438    +0x03d0    } | .SMBiosTableLength
        _m039 uint8_t                  sm_bios_major_version;                //{ +0x03c4    +0x03d4    +0x043c    +0x03d4    } | .SMBiosMajorVersion
        _m040 uint8_t                  sm_bios_minor_version;                //{ +0x03c5    +0x03d5    +0x043d    +0x03d5    } | .SMBiosMinorVersion
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                 
        _m041 uint8_t                  hiber_simulate_flags;                 //{ +0x0039    +0x0039    +0x0039    } | .HiberSimulateFlags
        _m042 uint32_t                 spare_ulong;                          //{ +0x0290    +0x02f8    +0x0290    } | .SpareUlong
        _m043 uint8_t                  secure_launched;                      //{ +0x0365    +0x03cd    +0x0365    } | .SecureLaunched
        _m044 uint8_t                  secure_boot;                          //{ +0x0366    +0x03ce    +0x0366    } | .SecureBoot
        _m045 uint64_t                 hv_page_table_root;                   //{ +0x0368    +0x03d0    +0x0368    } | .HvPageTableRoot
        _m046 uint64_t                 restore_processor_state_routine;      //{ +0x0390    +0x03f8    +0x0390    } | .RestoreProcessorStateRoutine
        _m047 uint8_t                  hiber_resume_xhci_handoff_skip;       //{ +0x03d6    +0x043e    +0x03d6    } | .HiberResumeXhciHandoffSkip
        _m048 uint8_t                  initialize_usb_core;                  //{ +0x03d7    +0x043f    +0x03d7    } | .InitializeUSBCore
        _m049 uint8_t                  valid_usb_core_id;                    //{ +0x03d8    +0x0440    +0x03d8    } | .ValidUSBCoreId
        _m050 uint8_t                  usb_core_id;                          //{ +0x03d9    +0x0441    +0x03d9    } | .USBCoreId
        _m051 uint8_t                  skip_memory_map_validation;           //{ +0x03da    +0x0442    +0x03da    } | .SkipMemoryMapValidation
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m052 uint8_t                  fasr;                                 //{ +0x03cf    } | .Fasr
        _m053 uint8_t                  suppress_resume_prompt;               //{ +0x0443    } | .SuppressResumePrompt
                                                                           
        // Windows 10 v1607                                                
        //                                                                 
        _m054 uint32_t                 si_log_offset;                        //{ +0x0280    } | .SiLogOffset
        _m055 uint64_t                 hv_cr3;                               //{ +0x0358    } | .HvCr3
        _m056 uint64_t                 hal_entry_point_physical;             //{ +0x0380    } | .HalEntryPointPhysical
                                                                           
        SDK_MAGIC_PROPERTIES( "PO_MEMORY_IMAGE.$", 0x3e0, true, 0x484c61327aff18d9 );                                    
        SDK_DYNAMIC_SIZE( memory_image_t );                                    
    };                                                                     
};
#include "magic/memory_image_t.end.hpp"
