#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t), "OutParameterMarshalingClient._splayLinks", splay_links, 0x80, 0xc0, true, 0xb9e67dfc221e28b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "OutParameterMarshalingClient._ulAssociationId", ul_association_id, 0x140, 0x20, true, 0x574dc6c3b64ff877)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::cached_event_t), "OutParameterMarshalingClient._eventClientDisconnected", event_client_disconnected, 0x180, 0x80, true, 0xee3a5b4e2a796fe0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tp::wait_t*), "OutParameterMarshalingClient._pWait", p_wait, 0x280, 0x40, true, 0xdf7c19e9f9387bc6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "OutParameterMarshalingClient._bRanDown", b_ran_down, 0x300, 0x8, true, 0xc7d64350bf2eb1b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "OutParameterMarshalingClient._bCanceledWait", b_canceled_wait, 0x308, 0x8, true, 0xf5271c1069c41722)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "OutParameterMarshalingClient._bAddedToTable", b_added_to_table, 0x310, 0x8, true, 0x27ee3b74fc431b74)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "OutParameterMarshalingClient._bRemovedFromTable", b_removed_from_table, 0x318, 0x8, true, 0x84f3ee5397a818cd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "OutParameterMarshalingClient._listMarshalingSets", list_marshaling_sets, 0x340, 0x80, true, 0x9914849da532a2bb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "OutParameterMarshalingClient._disconnectSubscriptionId", disconnect_subscription_id, 0x200, 0x80, true, 0x6c9a47dff0dfbf9d)
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
#endif