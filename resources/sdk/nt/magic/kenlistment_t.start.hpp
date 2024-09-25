#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KENLISTMENT.cookie", cookie, 0x0, 0x20, true, 0x76e701244d5ac47d)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktmobject_namespace_link_t), "_KENLISTMENT.NamespaceLink", namespace_link, 0x40, 0x40, true, 0xd74f873f8332edf7)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KENLISTMENT.EnlistmentId", enlistment_id, 0x180, 0x80, true, 0xdd029a1d4aedfc56)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_KENLISTMENT.Mutex", mutex, 0x200, 0xc0, true, 0xd72fed0b7ac6025b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KENLISTMENT.NextSameTx", next_same_tx, 0x3c0, 0x80, true, 0x86399012859ae394)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KENLISTMENT.NextSameRm", next_same_rm, 0x440, 0x80, true, 0x1d588c14c2cec773)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kresourcemanager_t*), "_KENLISTMENT.ResourceManager", resource_manager, 0x4c0, 0x40, true, 0x2d138fb02ff7d576)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktransaction_t*), "_KENLISTMENT.Transaction", transaction, 0x500, 0x40, true, 0x739655697d51517)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kenlistment_state_t), "_KENLISTMENT.State", state, 0x540, 0x20, true, 0xe23d7976c4acf80f)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KENLISTMENT.Flags", flags, 0x560, 0x20, true, 0x39cf6e4c808e3a6c)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KENLISTMENT.NotificationMask", notification_mask, 0x580, 0x20, true, 0x3597d6792916ad35)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KENLISTMENT.Key", key, 0x5c0, 0x40, true, 0x365459009ea2dca4)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KENLISTMENT.KeyRefCount", key_ref_count, 0x600, 0x20, true, 0xceddbf0cfc66975)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KENLISTMENT.RecoveryInformation", recovery_information, 0x640, 0x40, true, 0xd7eb50b9e0f5c48c)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KENLISTMENT.RecoveryInformationLength", recovery_information_length, 0x680, 0x20, true, 0x4701ca80d8653225)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KENLISTMENT.DynamicNameInformation", dynamic_name_information, 0x6c0, 0x40, true, 0x123e9d0684fbef9e)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KENLISTMENT.DynamicNameInformationLength", dynamic_name_information_length, 0x700, 0x20, true, 0xc766d46da4629340)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktmnotification_packet_t*), "_KENLISTMENT.FinalNotification", final_notification, 0x740, 0x40, true, 0xe4453129752e57ad)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kenlistment_t*), "_KENLISTMENT.SupSubEnlistment", sup_sub_enlistment, 0x780, 0x40, true, 0x459c2a08aa8c211f)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KENLISTMENT.SupSubEnlHandle", sup_sub_enl_handle, 0x7c0, 0x40, true, 0xa7fa06337e2805a6)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KENLISTMENT.SubordinateTxHandle", subordinate_tx_handle, 0x800, 0x40, true, 0x3de3c98cb476e2eb)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KENLISTMENT.CrmEnlistmentEnId", crm_enlistment_en_id, 0x840, 0x80, true, 0x9163680672ff1254)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KENLISTMENT.CrmEnlistmentTmId", crm_enlistment_tm_id, 0x8c0, 0x80, true, 0x65ddceea1c46e721)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KENLISTMENT.CrmEnlistmentRmId", crm_enlistment_rm_id, 0x940, 0x80, true, 0xfc00923dd33ac0e2)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KENLISTMENT.NextHistory", next_history, 0x9c0, 0x20, true, 0x784ab795e3b185bf)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kenlistment_history_t, 20>), "_KENLISTMENT.History", history, 0x9e0, 0x0, true, 0x236590af37918a0d)
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
#endif