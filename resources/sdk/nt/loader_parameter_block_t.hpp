#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"
#include "arm_loader_block_t.hpp"
#include "i386_loader_block_t.hpp"
#include "firmware_information_loader_block_t.hpp"

namespace nls { struct data_block_t; }

#include "magic/loader_parameter_block_t.start.hpp"
namespace nt
{
    struct arc_disk_information_t;
    struct loader_parameter_extension_t;
    struct configuration_component_data_t;

    // [struct _LOADER_PARAMETER_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct loader_parameter_block_t                                                           
    {                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                    
        _m000 uint32_t                                       os_major_version;                  //{ +0x0000    +0x0000    +0x0000    } | .OsMajorVersion
        _m001 uint32_t                                       os_minor_version;                  //{ +0x0004    +0x0004    +0x0004    } | .OsMinorVersion
        _m002 uint32_t                                       size;                              //{ +0x0008    +0x0008    +0x0008    } | .Size
        _m003 uint32_t                                       os_loader_security_version;        //{ +0x000c    +0x000c    +0x000c    } | .OsLoaderSecurityVersion
        _m004 nt::list_entry_t                               load_order_list_head;              //{ +0x0010    +0x0010    +0x0010    } | .LoadOrderListHead
        _m005 nt::list_entry_t                               memory_descriptor_list_head;       //{ +0x0020    +0x0020    +0x0020    } | .MemoryDescriptorListHead
        _m006 nt::list_entry_t                               boot_driver_list_head;             //{ +0x0030    +0x0030    +0x0030    } | .BootDriverListHead
        _m007 nt::list_entry_t                               early_launch_list_head;            //{ +0x0040    +0x0040    +0x0040    } | .EarlyLaunchListHead
        _m008 nt::list_entry_t                               core_driver_list_head;             //{ +0x0050    +0x0050    +0x0050    } | .CoreDriverListHead
        _m009 nt::list_entry_t                               core_extensions_driver_list_head;  //{ +0x0060    +0x0060    +0x0060    } | .CoreExtensionsDriverListHead
        _m010 nt::list_entry_t                               tpm_core_driver_list_head;         //{ +0x0070    +0x0070    +0x0070    } | .TpmCoreDriverListHead
        _m011 uint64_t                                       kernel_stack;                      //{ +0x0080    +0x0080    +0x0080    } | .KernelStack
        _m012 uint64_t                                       prcb;                              //{ +0x0088    +0x0088    +0x0088    } | .Prcb
        _m013 uint64_t                                       process;                           //{ +0x0090    +0x0090    +0x0090    } | .Process
        _m014 uint64_t                                       thread;                            //{ +0x0098    +0x0098    +0x0098    } | .Thread
        _m015 uint32_t                                       kernel_stack_size;                 //{ +0x00a0    +0x00a0    +0x00a0    } | .KernelStackSize
        _m016 uint32_t                                       registry_length;                   //{ +0x00a4    +0x00a4    +0x00a4    } | .RegistryLength
        _m017 void*                                          registry_base;                     //{ +0x00a8    +0x00a8    +0x00a8    } | .RegistryBase
        _m018 struct nt::configuration_component_data_t*     configuration_root;                //{ +0x00b0    +0x00b0    +0x00b0    } | .ConfigurationRoot
        _m019 char*                                          arc_boot_device_name;              //{ +0x00b8    +0x00b8    +0x00b8    } | .ArcBootDeviceName
        _m020 char*                                          arc_hal_device_name;               //{ +0x00c0    +0x00c0    +0x00c0    } | .ArcHalDeviceName
        _m021 char*                                          nt_boot_path_name;                 //{ +0x00c8    +0x00c8    +0x00c8    } | .NtBootPathName
        _m022 char*                                          nt_hal_path_name;                  //{ +0x00d0    +0x00d0    +0x00d0    } | .NtHalPathName
        _m023 char*                                          load_options;                      //{ +0x00d8    +0x00d8    +0x00d8    } | .LoadOptions
        _m024 struct nls::data_block_t*                      nls_data;                          //{ +0x00e0    +0x00e0    +0x00e0    } | .NlsData
        _m025 struct nt::arc_disk_information_t*             arc_disk_information;              //{ +0x00e8    +0x00e8    +0x00e8    } | .ArcDiskInformation
        _m026 struct nt::loader_parameter_extension_t*       extension;                         //{ +0x00f0    +0x00f0    +0x00f0    } | .Extension
        _m027 struct nt::i386_loader_block_t                 i386;                              //{ +0x00f8    +0x00f8    +0x00f8    } | .I386
        _m028 struct nt::arm_loader_block_t                  arm;                               //{ +0x00f8    +0x00f8    +0x00f8    } | .Arm
        _m029 struct nt::firmware_information_loader_block_t firmware_information;              //{ +0x0108    +0x0108    +0x0108    } | .FirmwareInformation
        _m030 char*                                          os_bootstat_path_name;             //{ +0x0148    +0x0148    +0x0148    } | .OsBootstatPathName
        _m031 char*                                          arc_os_data_device_name;           //{ +0x0150    +0x0150    +0x0150    } | .ArcOSDataDeviceName
        _m032 char*                                          arc_windows_sys_part_name;         //{ +0x0158    +0x0158    +0x0158    } | .ArcWindowsSysPartName
                                                                                              
        // Windows 11                                                                         
        //                                                                                    
        _m033 struct rtl::rb_tree_t                          memory_descriptor_tree;            //{ +0x0160    } | .MemoryDescriptorTree
                                                                                              
        SDK_MAGIC_PROPERTIES( "_LOADER_PARAMETER_BLOCK.$", 0x160, true, 0xf04fd57a3ae5b220 );                                 
        SDK_DYNAMIC_SIZE( loader_parameter_block_t );                                         
    };                                                                                        
};
#include "magic/loader_parameter_block_t.end.hpp"
