#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ENLISTMENT_CRM_INFORMATION.CrmTransactionManagerId", crm_transaction_manager_id, 0x0, 0x80, true, 0xecd4909c8fd0fdfa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ENLISTMENT_CRM_INFORMATION.CrmResourceManagerId", crm_resource_manager_id, 0x80, 0x80, true, 0xffe387ca2bdbc3b6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ENLISTMENT_CRM_INFORMATION.CrmEnlistmentId", crm_enlistment_id, 0x100, 0x80, true, 0x441c59820b84918d)
#else
#define _m00
#define _m01
#define _m02
#endif