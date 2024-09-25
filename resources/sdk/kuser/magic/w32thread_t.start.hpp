#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_W32THREAD.pEThread", p_e_thread, 0x0, 0x40, true, 0xa3be5194ebef49e8)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32THREAD.RefCount", ref_count, 0x40, 0x20, true, 0x43f104f8520c0039)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct kuser::tl_t*), "_W32THREAD.ptlW32", ptl_w32, 0x80, 0x40, true, 0x5eaed4a0588ddcac)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pgdiDcattr", pgdi_dcattr, 0xc0, 0x40, true, 0x9dae47b171c2ed51)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pgdiBrushAttr", pgdi_brush_attr, 0x100, 0x40, true, 0x61c810d7b9acc999)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_W32THREAD.UMPDOBJList", umpdobj_list, 0x140, 0x80, true, 0x98c008984b24562e)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pUMPDHeap", p_umpd_heap, 0x1c0, 0x40, true, 0xd36c1cc88578f77e)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pProxyPort", p_proxy_port, 0x200, 0x40, true, 0x1c283e7128235100)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pClientID", p_client_id, 0x240, 0x40, true, 0x526b56ca0005f37d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.DxThread", dx_thread, 0x280, 0x40, true, 0x1dec956408fb868d)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_W32THREAD.GdiTmpTgoList", gdi_tmp_tgo_list, 0x2c0, 0x80, true, 0xa3bf96918a3d62d0)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32THREAD.pRBRecursionCount", p_rb_recursion_count, 0x340, 0x20, true, 0x3a81b76f5f1abe74)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32THREAD.pNonRBRecursionCount", p_non_rb_recursion_count, 0x360, 0x20, true, 0x72860bff0ecd1a78)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct kuser::tlspritestate_t), "_W32THREAD.tlSpriteState", tl_sprite_state, 0x380, 0x40, true, 0x51dfa5d2b0adb2a9)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pSpriteState", p_sprite_state, 0x8c0, 0x40, true, 0x589801fc5701c352)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pDevHTInfo", p_dev_ht_info, 0x900, 0x40, true, 0x5fc69d51a2d8eb1b)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32THREAD.ulDevHTInfoUniqueness", ul_dev_ht_info_uniqueness, 0x940, 0x20, true, 0x8e3a08d9282d1acd)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pdcoAA", pdco_aa, 0x980, 0x40, true, 0x7bf9fa383c99415e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pdcoRender", pdco_render, 0x9c0, 0x40, true, 0xbdbec14adbf28bb1)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pdcoSrc", pdco_src, 0xa00, 0x40, true, 0xc82e1db461af0bfd)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "_W32THREAD.bEnableEngUpdateDeviceSurface", b_enable_eng_update_device_surface, 0xa40, 0x1, true, 0x6ad78a259a91f0a2, 0, uint8_t,uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "_W32THREAD.bIncludeSprites", b_include_sprites, 0xa41, 0x1, true, 0xcc1e037b76ee41d5, 0, uint8_t,uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int8_t), "_W32THREAD.bEnableAppContainerRendering", b_enable_app_container_rendering, 0xa43, 0x1, true, 0x50cff47df60aa133, 0, uint8_t,uint32_t)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32THREAD.ulWindowSystemRendering", ul_window_system_rendering, 0xa60, 0x20, true, 0xd2cfd01567907f77)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32THREAD.iVisRgnUniqueness", i_vis_rgn_uniqueness, 0xa80, 0x20, true, 0x8911834597a7346c)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32THREAD.dpiContext", dpi_context, 0xaa0, 0x20, true, 0xf0d32aac055d30d6)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_W32THREAD.pUmfdTls", p_umfd_tls, 0xb00, 0x40, true, 0xdb1df3bf20e49598)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dpicontextinfo_t*), "_W32THREAD.pdci", pdci, 0xb40, 0x40, true, 0x10a8186c021eb043)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_W32THREAD.bSnapWindowScreenAccess", b_snap_window_screen_access, 0xa44, 0x1, true, 0x9c36f1559404be8d, 1, uint32_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_W32THREAD.bGdiEngMode", b_gdi_eng_mode, 0xa45, 0x1, true, 0xded8f4f83949c8d4, 1, uint32_t)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum kuser::dpi_hosting_behavior_t), "_W32THREAD.dpiHostingBehavior", dpi_hosting_behavior, 0xac0, 0x20, true, 0x33d9462878ea2a23)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dpihostingbehaviorinfo_t*), "_W32THREAD.pdhbi", pdhbi, 0xb80, 0x40, true, 0x5c70313661921744)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_W32THREAD.ulDCompQuotaGuardCount", ul_d_comp_quota_guard_count, 0xbc0, 0x20, true, 0x4e3cb008721607c0)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_W32THREAD.bPerMonAwareVirtualized", b_per_mon_aware_virtualized, 0xa42, 0x1, true, 0x28ab22e0f4b2d632, 1, uint32_t)
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
#endif