#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUIREGISTRYINFO.Owned", owned, 0x0, 0x20, true, 0xd682529886928fa5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_MUIREGISTRYINFO.InstallLanguageFallback", install_language_fallback, 0x20, 0x40, true, 0x629620b6369775eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUIREGISTRYINFO.Generation", generation, 0x60, 0x20, true, 0x820339e50a246737)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUIREGISTRYINFO.ProcessGeneration", process_generation, 0x80, 0x20, true, 0x5d24d7ed5495de76)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilanguages_t*), "_MUIREGISTRYINFO.Installed", installed, 0xc0, 0x40, true, 0x453105d4f0f13620)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muistringpool_t*), "_MUIREGISTRYINFO.Strings", strings, 0x100, 0x40, true, 0xe941e9276be20a3c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilangcfglist_t*), "_MUIREGISTRYINFO.MachineConfig", machine_config, 0x140, 0x40, true, 0x8f7224600d4977ba)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilangcfglist_t*), "_MUIREGISTRYINFO.UserConfig", user_config, 0x180, 0x40, true, 0xa4355da8a713e8f2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilanglist_t*), "_MUIREGISTRYINFO.MachinePreferred", machine_preferred, 0x1c0, 0x40, true, 0x786cdb690940965d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilanglist_t*), "_MUIREGISTRYINFO.UserPreferred", user_preferred, 0x200, 0x40, true, 0x770ab6d1e5586be1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilanglist_t*), "_MUIREGISTRYINFO.ProcessPreferred", process_preferred, 0x240, 0x40, true, 0x6443b8cc7352b06e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilanglist_t*), "_MUIREGISTRYINFO.MergedUser", merged_user, 0x280, 0x40, true, 0xfc67c4fdcb506cb7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilanglist_t*), "_MUIREGISTRYINFO.MergedMachine", merged_machine, 0x2c0, 0x40, true, 0x2f5a4901cac1c068)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muilanglist_t*), "_MUIREGISTRYINFO.MergedFallback", merged_fallback, 0x300, 0x40, true, 0xafa3ac719b4b52c6)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::muiregistryinfo_t*), "_MUIREGISTRYINFO.PrevRegInfo", prev_reg_info, 0x340, 0x40, true, 0x153dfe2899bf15db)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUIREGISTRYINFO.MUI_Locked", mui_locked, 0x380, 0x20, true, 0x56fc33f6e07a5fd7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUIREGISTRYINFO.MUI_SE", mui_se, 0x3a0, 0x20, true, 0x50257864c8128af4)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUIREGISTRYINFO.MUI_NumberAllowed", mui_number_allowed, 0x3c0, 0x20, true, 0xe105e1b20871f694)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_MUIREGISTRYINFO.MUI_AllowedLanguage", mui_allowed_language, 0x400, 0x40, true, 0xc94ac044b16daa07)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_MUIREGISTRYINFO.MUI_InstalledSKU", mui_installed_sku, 0x440, 0x40, true, 0x7e14e327ecccb2b8)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUIREGISTRYINFO.cbInstalledSKU", cb_installed_sku, 0x480, 0x20, true, 0xad8467317835b58b)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUIREGISTRYINFO.cbAllowedLanguage", cb_allowed_language, 0x4a0, 0x20, true, 0x585f71b5e04e3012)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_MUIREGISTRYINFO.MUI_DisallowedLanguage", mui_disallowed_language, 0x4c0, 0x40, true, 0xe7c7252a1d5b65de)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUIREGISTRYINFO.cbDisallowedLanguage", cb_disallowed_language, 0x500, 0x20, true, 0x5f44b653222a3da6)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif