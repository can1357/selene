#pragma once
#include <sdkgen/support_library.hpp>
#include "npem_control_t.hpp"
#include "resizable_bar_info_t.hpp"
#include "express_acs_control_t.hpp"
#include "express_device_type_t.hpp"
#include "express_error_packet_t.hpp"
#include "express_sriov_control_t.hpp"
#include "express_aer_capability_t.hpp"
#include "express_dpc_capability_t.hpp"
#include "express_ltr_capability_t.hpp"
#include "express_ptm_capability_t.hpp"
#include "npem_interface_context_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "express_port_obff_control_t.hpp"
#include "express_l1_pm_ss_capability_t.hpp"
#include "express_ats_control_register_t.hpp"
#include "express_capabilities_register_t.hpp"
#include "../whea/error_source_descriptor_t.hpp"
#include "express_acs_capability_register_t.hpp"
#include "express_device_control_register_t.hpp"
#include "express_ltr_max_latency_register_t.hpp"
#include "express_tph_requester_capability_t.hpp"
#include "express_device_control_2_register_t.hpp"
#include "express_slot_capabilities_register_t.hpp"
#include "express_device_capabilities_register_t.hpp"
#include "express_device_capabilities_2_register_t.hpp"
#include "express_designated_vendor_specific_capability_t.hpp"
#include "express_designated_vendor_specific_port_specific_attribute_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/express_port_t.start.hpp"
namespace pci
{
    struct device_t;
    struct express_link_t;
    struct express_port_t;
    struct root_complex_t;
    struct express_bridge_t;
    union express_tph_st_table_entry_t;

    // [struct _EXPRESS_PORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct express_port_t                                                                             
    {                                                                                                 
        using device_capabilities_t =             union pci::express_device_capabilities_register_t;                                        
        using device_capabilities2_t =            union pci::express_device_capabilities_2_register_t;                                        
        using hal_device_power_trans_callback_t = sdk::function<int32_t(struct nt::device_object_t*, enum nt::device_power_state_t, void*)>*;                                        
        using usb4_dvsec_header_t =               struct pci::express_designated_vendor_specific_capability_t;                                        
        using usb4_dvsec_port_attribute_t =       union pci::express_designated_vendor_specific_port_specific_attribute_t;                                        
                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                            
        _m000 enum pci::express_device_type_t                 device_type;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceType
        _m001 struct pci::device_t*                           device;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Device
        _m002 struct pci::root_complex_t*                     root_complex;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RootComplex
        _m003 struct pci::express_bridge_t*                   root_port_bridge;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RootPortBridge
        _m004 struct pci::express_bridge_t*                   parent;                                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Parent
        _m005 union pci::express_capabilities_register_t      express_capabilities;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ExpressCapabilities
        _m006 union pci::express_device_control_register_t    device_control;                           //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .DeviceControl
        _m007 union pci::express_device_control_2_register_t  device_control2;                          //{ +0x002c    +0x002e    +0x002e    +0x002e    } | .DeviceControl2
        _m008 device_capabilities_t                           device_capabilities;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceCapabilities
        _m009 device_capabilities2_t                          device_capabilities2;                     //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .DeviceCapabilities2
        _m010 union pci::express_slot_capabilities_register_t slot_capabilities;                        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SlotCapabilities
        _m011 struct pci::express_port_t*                     sibling;                                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Sibling
        _m012 struct pci::express_link_t*                     express_link;                             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ExpressLink
        _m013 uint32_t                                        acceptable_l0s_latency;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .AcceptableL0sLatency
        _m014 uint32_t                                        acceptable_l1_latency;                    //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .AcceptableL1Latency
        _m015 uint32_t                                        computed_l0s_latency;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ComputedL0sLatency
        _m016 uint32_t                                        computed_l1_latency;                      //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .ComputedL1Latency
        _m017 uint1_t                                         base_version11_or_greater;                //{ +0x0060@0  +0x0060@0  +0x0060@0  +0x0060@0  } | .BaseVersion11OrGreater
        _m018 uint1_t                                         registered_for_aspm_callback;             //{ +0x0060@1  +0x0060@1  +0x0060@1  +0x0060@1  } | .RegisteredForAspmCallback
        _m019 uint16_t                                        serial_number_capability;                 //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .SerialNumberCapability
        _m020 uint64_t                                        serial_number;                            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SerialNumber
        _m021 uint16_t                                        aer_capability;                           //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .AerCapability
        _m022 struct pci::express_aer_capability_t            aer_capability_block;                     //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .AerCapabilityBlock
        _m023 uint32_t                                        next_ari_function_number;                 //{ +0x00c0    +0x0104    +0x0104    +0x0104    } | .NextAriFunctionNumber
        _m024 uint16_t                                        ari_capability;                           //{ +0x00c4    +0x0108    +0x0108    +0x0108    } | .AriCapability
        _m025 uint16_t                                        acs_capability;                           //{ +0x00c6    +0x0110    +0x0110    +0x0110    } | .AcsCapability
        _m026 union pci::express_acs_control_t                acs_control;                              //{ +0x00c8    +0x0112    +0x0114    +0x0112    } | .AcsControl
        _m027 uint16_t                                        ats_capability;                           //{ +0x00ca    +0x0114    +0x0116    +0x0114    } | .AtsCapability
        _m028 uint16_t                                        pasid_capability;                         //{ +0x00cc    +0x0116    +0x0128    +0x0116    } | .PasidCapability
        _m029 uint16_t                                        pri_capability;                           //{ +0x00ce    +0x0118    +0x012a    +0x0118    } | .PriCapability
        _m030 hal_device_power_trans_callback_t               hal_device_power_trans_callback;          //{ +0x00d0    +0x0128    +0x0140    +0x0128    } | .HalDevicePowerTransCallback
        _m031 void*                                           hal_device_power_trans_callback_context;  //{ +0x00d8    +0x0130    +0x0148    +0x0130    } | .HalDevicePowerTransCallbackContext
        _m032 uint16_t                                        vc_capability;                            //{ +0x00e0    +0x0138    +0x0150    +0x0138    } | .VcCapability
        _m033 uint16_t                                        sriov_capability;                         //{ +0x00e2    +0x0178    +0x0198    +0x0178    } | .SriovCapability
        _m034 uint16_t                                        first_vf_offset;                          //{ +0x00e4    +0x017a    +0x019c    +0x017a    } | .FirstVFOffset
        _m035 uint16_t                                        vf_stride;                                //{ +0x00e6    +0x017c    +0x019e    +0x017c    } | .VFStride
        _m036 uint16_t                                        initial_v_fs;                             //{ +0x00e8    +0x017e    +0x01a0    +0x017e    } | .InitialVFs
        _m037 uint16_t                                        total_v_fs;                               //{ +0x00ea    +0x0180    +0x01a2    +0x0180    } | .TotalVFs
        _m038 uint16_t                                        num_v_fs;                                 //{ +0x00ec    +0x0182    +0x01a4    +0x0182    } | .NumVFs
        _m039 uint8_t                                         enable_sriov_decodes;                     //{ +0x00ee    +0x0184    +0x01a6    +0x0184    } | .EnableSriovDecodes
        _m040 uint8_t                                         sriov_enabled;                            //{ +0x00ef    +0x0185    +0x01a7    +0x0185    } | .SriovEnabled
        _m041 sdk::array<uint32_t, 6>                         probed_vf_bars;                           //{ +0x00f0    +0x0188    +0x01ac    +0x0188    } | .ProbedVfBars
        _m042 struct pci::express_error_packet_t              whea_error_packet;                        //{ +0x0108    +0x01a0    +0x01c4    +0x01a0    } | .WheaErrorPacket
        _m043 struct whea::error_source_descriptor_t          error_source;                             //{ +0x0228    +0x0305    +0x0329    +0x0305    } | .ErrorSource
        _m044 uint16_t                                        tph_requester_capability;                 //{ +0x05f4    +0x06d2    +0x06f6    +0x06d2    } | .TphRequesterCapability
        _m045 uint8_t                                         tph_requester_capability_saved;           //{ +0x05f6    +0x06d4    +0x06f8    +0x06d4    } | .TphRequesterCapabilitySaved
        _m046 struct pci::express_tph_requester_capability_t  tph_requester_capability_block;           //{ +0x05f8    +0x06d8    +0x06fc    +0x06d8    } | .TphRequesterCapabilityBlock
        _m047 union pci::express_tph_st_table_entry_t*        tph_steering_tags;                        //{ +0x0608    +0x06e8    +0x0708    +0x06e8    } | .TphSteeringTags
        _m048 enum pci::express_port_obff_control_t           obff;                                     //{ +0x0610    +0x06f0    +0x0710    +0x06f0    } | .Obff
        _m049 uint16_t                                        ltr_capability;                           //{ +0x0614    +0x06f4    +0x0714    +0x06f4    } | .LtrCapability
        _m050 uint8_t                                         ltr_capability_saved;                     //{ +0x0616    +0x06f6    +0x0716    +0x06f6    } | .LtrCapabilitySaved
        _m051 struct pci::express_ltr_capability_t            ltr_capability_block;                     //{ +0x0618    +0x06f8    +0x0718    +0x06f8    } | .LtrCapabilityBlock
        _m052 union pci::express_ltr_max_latency_register_t   latency_for_downstream_endpoints;         //{ +0x0614    +0x06f4    +0x0714    +0x06f4    } | .LatencyForDownstreamEndpoints
        _m053 uint16_t                                        thunderbolt_capability;                   //{ +0x0620    +0x0700    +0x0720    +0x0700    } | .ThunderboltCapability
        _m054 uint16_t                                        l1_pm_ss_capability;                      //{ +0x0622    +0x0702    +0x0722    +0x0702    } | .L1PmSsCapability
        _m055 uint8_t                                         l1_pm_ss_capability_saved;                //{ +0x0624    +0x0704    +0x0724    +0x0704    } | .L1PmSsCapabilitySaved
        _m056 struct pci::express_l1_pm_ss_capability_t       l1_pm_ss_capability_block;                //{ +0x0628    +0x0708    +0x0728    +0x0708    } | .L1PmSsCapabilityBlock
        _m057 struct pci::resizable_bar_info_t                resizable_bar;                            //{ +0x0638    +0x0718    +0x0738    +0x0718    } | .ResizableBar
        _m058 uint32_t                                        vc_save_size;                             //{ +0x065c    +0x073c    +0x075c    +0x073c    } | .VcSaveSize
        _m059 uint8_t*                                        vc_save_area;                             //{ +0x0660    +0x0740    +0x0760    +0x0740    } | .VcSaveArea
        _m060 uint1_t                                         vc_capability_saved;                      //{ +0x0668@0  +0x0748@0  +0x077c@0  +0x0748@0  } | .VcCapabilitySaved
        _m061 uint1_t                                         acs_capability_saved;                     //{ +0x0668@1  +0x0748@1  +0x077c@1  +0x0748@1  } | .AcsCapabilitySaved
        _m062 uint32_t                                        flags_as_ulong;                           //{ +0x0668    +0x0748    +0x077c    +0x0748    } | .FlagsAsULONG
                                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                            
        _m063 union pci::express_device_control_register_t    old_device_control;                       //{ +0x002c    +0x002c    +0x002c    } | .OldDeviceControl
        _m064 uint1_t                                         svm_enabled;                              //{ +0x0060@2  +0x0060@2  +0x0060@2  } | .SvmEnabled
        _m065 uint16_t                                        express_pc_capability;                    //{ +0x0072    +0x0072    +0x0072    } | .ExpressPcCapability
        _m066 struct pci::express_dpc_capability_t            express_pc_capability_block;              //{ +0x00c0    +0x00c0    +0x00c0    } | .ExpressPcCapabilityBlock
        _m067 uint32_t                                        ari_forwarding_enable_count;              //{ +0x010c    +0x010c    +0x010c    } | .AriForwardingEnableCount
        _m068 uint16_t                                        ptm_capability;                           //{ +0x011a    +0x012c    +0x011a    } | .PtmCapability
        _m069 struct pci::express_ptm_capability_t            ptm_capability_block;                     //{ +0x011c    +0x0130    +0x011c    } | .PtmCapabilityBlock
        _m070 uint16_t                                        vc_capability_size;                       //{ +0x013a    +0x0152    +0x013a    } | .VcCapabilitySize
        _m071 uint16_t                                        npem_capability;                          //{ +0x013c    +0x0154    +0x013c    } | .NpemCapability
        _m072 struct pci::npem_interface_context_t            npem_interface_context;                   //{ +0x0140    +0x0158    +0x0140    } | .NpemInterfaceContext
        _m073 struct pci::npem_control_t                      npem_control_block;                       //{ +0x0150    +0x0168    +0x0150    } | .NpemControlBlock
        _m074 uint1_t                                         ptm_capability_saved;                     //{ +0x0748@2  +0x077c@2  +0x0748@2  } | .PtmCapabilitySaved
                                                                                                      
        // Windows 11                                                                                 
        //                                                                                            
        _m075 uint1_t                                         ats_enabled;                              //{ +0x0060@3  } | .AtsEnabled
        _m076 union pci::express_acs_capability_register_t    acs_capability_register;                  //{ +0x0112    } | .AcsCapabilityRegister
        _m077 struct pci::express_ats_control_register_t      ats_control;                              //{ +0x0118    } | .AtsControl
        _m078 uint64_t                                        ats_lock;                                 //{ +0x0120    } | .AtsLock
        _m079 uint16_t                                        rcec_ep_assoc_capability;                 //{ +0x0190    } | .RcecEpAssocCapability
        _m080 uint32_t                                        rcec_ep_assoc_bitmap;                     //{ +0x0194    } | .RcecEpAssocBitmap
        _m081 union pci::express_sriov_control_t              sriov_control;                            //{ +0x019a    } | .SriovControl
        _m082 uint8_t                                         previous_sriov_decodes;                   //{ +0x01a8    } | .PreviousSriovDecodes
        _m083 uint16_t                                        usb4_dvsec_capability;                    //{ +0x0768    } | .Usb4DvsecCapability
        _m084 usb4_dvsec_header_t                             usb4_dvsec_header;                        //{ +0x076c    } | .Usb4DvsecHeader
        _m085 usb4_dvsec_port_attribute_t                     usb4_dvsec_port_attribute;                //{ +0x0778    } | .Usb4DvsecPortAttribute
        _m086 uint1_t                                         sriov_capability_saved;                   //{ +0x077c@3  } | .SriovCapabilitySaved
        _m087 uint1_t                                         ats_capability_saved;                     //{ +0x077c@4  } | .AtsCapabilitySaved
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_EXPRESS_PORT.$", 0x750, true, 0xc06940cddaec7ac );                                        
        SDK_DYNAMIC_SIZE( express_port_t );                                                           
    };                                                                                                
};
#include "magic/express_port_t.end.hpp"
