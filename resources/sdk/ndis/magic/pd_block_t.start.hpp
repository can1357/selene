#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_PD_BLOCK.Miniport", miniport, 0x0, 0x0, false, 0x90cee90a90fc6341)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_BLOCK.DiagnosticCode", diagnostic_code, 0x0, 0x0, false, 0x1fca8bf53dac274e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PD_BLOCK.PDEnabledRegistryValue", pd_enabled_registry_value, 0x0, 0x0, false, 0x4da6435208b54506)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PD_BLOCK.PDBuffersManagedByDriver", pd_buffers_managed_by_driver, 0x0, 0x0, false, 0x47bcdb75e68d4dea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PD_BLOCK.PDNonDmaAdapter", pd_non_dma_adapter, 0x0, 0x0, false, 0x1f2f161b33282634)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_BLOCK.PDDomainId", pd_domain_id, 0x0, 0x0, false, 0xa46a833c180d3ca4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_BLOCK.PDDmaAddressWidth", pd_dma_address_width, 0x0, 0x0, false, 0x2a8f3a8f651cb346)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_config_t*), "_NDIS_PD_BLOCK.PDCurrentConfig", pd_current_config, 0x0, 0x0, false, 0x353e77d06e180148)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_BLOCK.PDCurrentConfigSize", pd_current_config_size, 0x0, 0x0, false, 0x96f23d15d2341dbb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_BLOCK.PDCurrentConfigBufferSize", pd_current_config_buffer_size, 0x0, 0x0, false, 0x58f515ce1e8fb09f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_PD_BLOCK.PDClientList", pd_client_list, 0x0, 0x0, false, 0x301fd66c80e963f8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_PD_BLOCK.PDBlockListLink", pd_block_list_link, 0x0, 0x0, false, 0x5cd6f43bbdae8038)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PD_BLOCK.PDBMDomain", pdbm_domain, 0x0, 0x0, false, 0xa232bead8cc897ef)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_bm_domain_member_handle_t*), "_NDIS_PD_BLOCK.PDBMDomainMemberHandle", pdbm_domain_member_handle, 0x0, 0x0, false, 0x63781128eff7a223)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif