#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.Enlightenments", enlightenments, 0x0, 0x20, true, 0xfd8f68e53591d799)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.HypervisorConnected", hypervisor_connected, 0x20, 0x20, true, 0xbc1a4d60d2396b4e)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.EndOfInterrupt", end_of_interrupt, 0x40, 0x40, true, 0xae647016dfd013c2)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t, uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.ApicWriteIcr", apic_write_icr, 0x80, 0x40, true, 0xbccfbfe0c6afcabe)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SpinCountMask", spin_count_mask, 0xe0, 0x20, true, 0x1d763856ec1688de)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.LongSpinWait", long_spin_wait, 0x100, 0x40, true, 0x735d08ba8f4f665d)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<uint64_t()>*, sdk::function<uint64_t(uint32_t*)>*>), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.GetReferenceTime", get_reference_time, 0x140, 0x40, true, 0xa99f29b6da913dce)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint8_t, uint8_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SetSystemSleepProperty", set_system_sleep_property, 0x180, 0x40, true, 0xd6331730c52ae075)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.EnterSleepState", enter_sleep_state, 0x1c0, 0x40, true, 0x29d67f0321ab9eb0)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.NotifyDebugDeviceAvailable", notify_debug_device_available, 0x200, 0x40, true, 0xa6aef869437cc1f4)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, void*, struct nt::group_affinity_t*, void*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.MapDeviceInterrupt", map_device_interrupt, 0x240, 0x40, true, 0xf7be5e3cc9bbb104)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, void*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.UnmapDeviceInterrupt", unmap_device_interrupt, 0x280, 0x40, true, 0x5fec5cd3417dcc9d)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, void*, void*, struct nt::group_affinity_t*, void*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.RetargetDeviceInterrupt", retarget_device_interrupt, 0x2c0, 0x40, true, 0xafbfbd4cad3479b7)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(int64_t, uint32_t, uint64_t, uint8_t, void*)>*, sdk::function<int32_t(uint32_t, uint64_t, uint8_t, void*)>*>), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SetHpetConfig", set_hpet_config, 0x300, 0x40, true, 0xec23d1b6312f2c44)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.NotifyHpetEnabled", notify_hpet_enabled, 0x340, 0x40, true, 0xc19c435115ec066e)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*, uint32_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.QueryAssociatedProcessors", query_associated_processors, 0x380, 0x40, true, 0x692b75ee1d628589)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint32_t*, uint64_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.ReadMultipleMsr", read_multiple_msr, 0x3c0, 0x40, true, 0xe425fdafcfcb8d50)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint32_t*, uint64_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.WriteMultipleMsr", write_multiple_msr, 0x400, 0x40, true, 0x6fb760ef9fb55fb1)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint32_t*, uint32_t*, uint32_t*, uint32_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.ReadCpuid", read_cpuid, 0x440, 0x40, true, 0x88e6b76d868c42bb)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.LpWritebackInvalidate", lp_writeback_invalidate, 0x480, 0x40, true, 0x83efed6bb82fc375)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*, uint64_t*, uint32_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.GetMachineCheckContext", get_machine_check_context, 0x4c0, 0x40, true, 0x31d689c7405e50fa)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SuspendPartition", suspend_partition, 0x500, 0x40, true, 0x8c7db4d1a414bc15)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.ResumePartition", resume_partition, 0x540, 0x40, true, 0x40b9d582f921bde8)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SetSystemMachineCheckProperty", set_system_machine_check_property, 0x580, 0x40, true, 0xebbe085f55f74fe7)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct whea::recovery_context_t*, uint8_t, uint8_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.WheaErrorNotification", whea_error_notification, 0x5c0, 0x40, true, 0x787bc913b2c00a0c)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.GetProcessorIndexFromVpIndex", get_processor_index_from_vp_index, 0x600, 0x40, true, 0xfbb7a572cefcd846)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kaffinity_ex_t*, uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SyntheticClusterIpi", synthetic_cluster_ipi, 0x640, 0x40, true, 0xa2acb741b629f388)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.VpStartEnabled", vp_start_enabled, 0x680, 0x40, true, 0x9b686757b7cfb22b)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.StartVirtualProcessor", start_virtual_processor, 0x6c0, 0x40, true, 0x780f43c94b4e780e)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.GetVpIndexFromApicId", get_vp_index_from_apic_id, 0x700, 0x40, true, 0x20cc05702b023e43)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.IumAccessPciDevice", ium_access_pci_device, 0x740, 0x40, true, 0x330bd0b0e016cae7)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(uint32_t, void*, uint64_t, uint64_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.IumEfiRuntimeService", ium_efi_runtime_service, 0x780, 0x40, true, 0x2250efafc3cce9d4)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct hal::hv_svm_system_capabilities_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmGetSystemCapabilities", svm_get_system_capabilities, 0x7c0, 0x40, true, 0x11421c1fdf67ed26)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmCreatePasidSpace", svm_create_pasid_space, 0x840, 0x40, true, 0x7eead2fd2cb01176)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint64_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmSetPasidAddressSpace", svm_set_pasid_address_space, 0x880, 0x40, true, 0x36d0776765f98965)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t, uint32_t, uint32_t, struct nt::ktb_flush_va_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmFlushPasid", svm_flush_pasid, 0x8c0, 0x40, true, 0x3e8b326149e07004)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(uint32_t, uint32_t, uint32_t, uint32_t)>*, sdk::function<int32_t(uint64_t, uint32_t, uint32_t, uint32_t)>*>), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmAttachPasidSpace", svm_attach_pasid_space, 0x900, 0x40, true, 0x4f2006a1e9a515b8)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(uint32_t)>*, sdk::function<int32_t(uint64_t)>*>), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmDetachPasidSpace", svm_detach_pasid_space, 0x940, 0x40, true, 0x283e050f3c5e3b74)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(uint32_t, uint32_t)>*, sdk::function<int32_t(uint64_t, uint32_t)>*>), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmEnablePasid", svm_enable_pasid, 0x980, 0x40, true, 0xe114b1740eea487)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(uint32_t, uint32_t)>*, sdk::function<int32_t(uint64_t, uint32_t)>*>), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmDisablePasid", svm_disable_pasid, 0x9c0, 0x40, true, 0xda29d93a46f6ca86)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, void*, uint32_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmAcknowledgePageRequest", svm_acknowledge_page_request, 0xa00, 0x40, true, 0x613f87c56985661e)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, int64_t, uint32_t, uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmCreatePrQueue", svm_create_pr_queue, 0xa40, 0x40, true, 0x753948a2ae491dc1)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmDeletePrQueue", svm_delete_pr_queue, 0xa80, 0x40, true, 0xf1a0798a1897a64f)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmClearPrqStalled", svm_clear_prq_stalled, 0xac0, 0x40, true, 0x4e464935beee4209)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.HvDebuggerPowerHandler", hv_debugger_power_handler, 0xb40, 0x40, true, 0x9459f0d0a3500cf8)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SetQpcBias", set_qpc_bias, 0xb80, 0x40, true, 0x667345e72d887f6f)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t()>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.GetQpcBias", get_qpc_bias, 0xbc0, 0x40, true, 0x32cf93b64a90023e)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_device_id_t*, uint64_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.RegisterDeviceId", register_device_id, 0xc00, 0x40, true, 0xa04e75980e3d5449)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.UnregisterDeviceId", unregister_device_id, 0xc40, 0x40, true, 0x44746367d311ea49)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(struct hal::hv_dma_domain_info_t*)>*, sdk::function<int32_t(struct hal::hv_dma_create_domain_info_t*)>*>), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.AllocateDeviceDomain", allocate_device_domain, 0xc80, 0x40, true, 0x25b7ab2f73d18e7f)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(struct ext::iommu_device_id_t*, struct hal::hv_dma_domain_info_t*)>*, sdk::function<int32_t(uint64_t, struct hal::hv_dma_domain_info_t*)>*>), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.AttachDeviceDomain", attach_device_domain, 0xcc0, 0x40, true, 0xcdbf39369ecc8c85)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.DetachDeviceDomain", detach_device_domain, 0xd00, 0x40, true, 0xb870c81cb5919792)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hal::hv_dma_domain_info_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.DeleteDeviceDomain", delete_device_domain, 0xd40, 0x40, true, 0xb216e37da8ecc183)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, uint32_t, uint64_t, uint64_t*, uint64_t*, uint8_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.MapDeviceLogicalRange", map_device_logical_range, 0xd80, 0x40, true, 0x8942eae5ef0e55d1)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, uint64_t, uint64_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.UnmapDeviceLogicalRange", unmap_device_logical_range, 0xdc0, 0x40, true, 0x9722fc30472cb74c)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, uint32_t, uint64_t*, uint64_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.MapDeviceSparsePages", map_device_sparse_pages, 0xe00, 0x40, true, 0x33e7bc2a4ed0ca3f)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, uint64_t*, uint64_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.UnmapDeviceSparsePages", unmap_device_sparse_pages, 0xe40, 0x40, true, 0x8046475c0f24c26c)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.GetDmaGuardEnabled", get_dma_guard_enabled, 0xe80, 0x40, true, 0x9c7ebb9c5a56c20e)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(void*, uint32_t)>*, sdk::function<int32_t(void*, uint32_t, uint8_t)>*>), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.UpdateMicrocode", update_microcode, 0xec0, 0x40, true, 0x4d3e2658c0fdd01b)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, void**)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.GetSintMessage", get_sint_message, 0xf00, 0x40, true, 0x8353949f00265793)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SetRootFaultReportingReady", set_root_fault_reporting_ready, 0xf40, 0x40, true, 0x77aeebc3b046aee2)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, struct hal::hv_svm_device_capabilities_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmGetDeviceCapabilities", svm_get_device_capabilities, 0x800, 0x40, true, 0x486d04172abf4498)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint8_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SvmSetDeviceEnabled", svm_set_device_enabled, 0xb00, 0x40, true, 0x41df3356d094a88c)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_device_id_t*, void*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.GetDeviceCapabilities", get_device_capabilities, 0x0, 0x0, false, 0xe1c2c0f18eb83a3d)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ext::iommu_device_id_t*, uint8_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SetDeviceAtsEnabled", set_device_ats_enabled, 0x0, 0x0, false, 0x43213333c242338d)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, uint32_t, uint32_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.SetDeviceCapabilities", set_device_capabilities, 0x0, 0x0, false, 0xd32b891e1f7eeda2)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint64_t, uint64_t)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.RestoreTime", restore_time, 0x0, 0x0, false, 0x357ae9e4c6ad2067)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, struct hal::hv_dma_domain_config_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.ConfigureDeviceDomain", configure_device_domain, 0x0, 0x0, false, 0x663815b90843be00)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.UnblockDefaultDma", unblock_default_dma, 0x0, 0x0, false, 0x53de29d9758892c5)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hal::hv_dma_domain_info_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.FlushDeviceDomain", flush_device_domain, 0x0, 0x0, false, 0x4e10d80dc87e04c8)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, uint32_t, struct nt::ktb_flush_va_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.FlushDeviceDomainVaList", flush_device_domain_va_list, 0x0, 0x0, false, 0x1ed01f9fcfb50058)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct hal::hv_dma_hybrid_passthrough_reserved_regions_t*)>*), "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.GetHybridPassthroughReservedRegions", get_hybrid_passthrough_reserved_regions, 0x0, 0x0, false, 0x618348ebf516d7db)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#endif