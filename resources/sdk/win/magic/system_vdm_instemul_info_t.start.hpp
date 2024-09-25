#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.SegmentNotPresent", segment_not_present, 0x0, 0x20, true, 0xab4e752bb192564b)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.VdmOpcode0F", vdm_opcode0f, 0x20, 0x20, true, 0x9c68618b0a5645be)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeESPrefix", opcode_es_prefix, 0x40, 0x20, true, 0x866af26f0fa187aa)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeCSPrefix", opcode_cs_prefix, 0x60, 0x20, true, 0x1c7d601fb00270c)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeSSPrefix", opcode_ss_prefix, 0x80, 0x20, true, 0x2f3e3119e2bb6986)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeDSPrefix", opcode_ds_prefix, 0xa0, 0x20, true, 0xc5a4df8db142713)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeFSPrefix", opcode_fs_prefix, 0xc0, 0x20, true, 0x9458c486af124b25)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeGSPrefix", opcode_gs_prefix, 0xe0, 0x20, true, 0x407d5b63335c68f5)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeOPER32Prefix", opcode_oper32_prefix, 0x100, 0x20, true, 0xb7cb6a7536790cd0)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeADDR32Prefix", opcode_addr32_prefix, 0x120, 0x20, true, 0xeeb10ca31c7f93af)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeINSB", opcode_insb, 0x140, 0x20, true, 0x65e0143ce0cb7b81)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeINSW", opcode_insw, 0x160, 0x20, true, 0xc93f8a06e3828336)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeOUTSB", opcode_outsb, 0x180, 0x20, true, 0x6831e6628fa31605)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeOUTSW", opcode_outsw, 0x1a0, 0x20, true, 0x495ee860b6425bb9)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodePUSHF", opcode_pushf, 0x1c0, 0x20, true, 0xb2ac380c8aa3210f)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodePOPF", opcode_popf, 0x1e0, 0x20, true, 0xbc71d33a99ed3b49)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeINTnn", opcode_in_tnn, 0x200, 0x20, true, 0x8e091c92650b8b8c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeINTO", opcode_into, 0x220, 0x20, true, 0xe6a5bfbae6c9cc79)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeIRET", opcode_iret, 0x240, 0x20, true, 0x87d9071e1f24550)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeINBimm", opcode_in_bimm, 0x260, 0x20, true, 0x91160742d8ff2cc5)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeINWimm", opcode_in_wimm, 0x280, 0x20, true, 0x18225b60ea423a2b)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeOUTBimm", opcode_out_bimm, 0x2a0, 0x20, true, 0x4d823c9645775482)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeOUTWimm", opcode_out_wimm, 0x2c0, 0x20, true, 0x4ba5ce41f9b11dd8)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeINB", opcode_inb, 0x2e0, 0x20, true, 0x8a448dfa8268925d)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeINW", opcode_inw, 0x300, 0x20, true, 0x41c2a0abdb05eda1)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeOUTB", opcode_outb, 0x320, 0x20, true, 0x7bfb66323a6ad3d4)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeOUTW", opcode_outw, 0x340, 0x20, true, 0x77f8645b41413f0)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeLOCKPrefix", opcode_lock_prefix, 0x360, 0x20, true, 0x475304a04b72358a)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeREPNEPrefix", opcode_repne_prefix, 0x380, 0x20, true, 0xb9843fc32bc3c734)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeREPPrefix", opcode_rep_prefix, 0x3a0, 0x20, true, 0x5c99e2f13ae1030b)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeHLT", opcode_hlt, 0x3c0, 0x20, true, 0x8083c98c4313cbe3)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeCLI", opcode_cli, 0x3e0, 0x20, true, 0xaa67cca74fc61a9f)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.OpcodeSTI", opcode_sti, 0x400, 0x20, true, 0x851d925767d8244a)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VDM_INSTEMUL_INFO.BopCount", bop_count, 0x420, 0x20, true, 0x5d7cadb6075b788d)
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