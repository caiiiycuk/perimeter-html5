static DWORD shader[]={
	0xffff0200, 0x0200001f, 0x80000000, 0xb0030000, 0x0200001f, 0x80000000, 
	0xb0070003, 0x0200001f, 0x80000000, 0xb0070004, 0x0200001f, 0x80000000, 
	0x90070001, 0x0200001f, 0x90000000, 0xa00f0800, 0x0200001f, 0x90000000, 
	0xa00f0803, 0x05000051, 0xa00f0000, 0xba03126f, 0xba03126f, 0x3a03126f, 
	0x3a03126f, 0x05000051, 0xa00f0001, 0xba03126f, 0x3a03126f, 0xba03126f, 
	0x3a03126f, 0x05000051, 0xa00f0012, 0x3f000000, 0x3f800000, 0x3e800000, 
	0xbba3d70a, 0x0200001f, 0x80000000, 0xb0030001, 0x0200001f, 0x80000000, 
	0xb0010002, 0x0200001f, 0x90000000, 0xa00f0801, 0x03000002, 0x800f0008, 
	0xb0000002, 0xa0ff0012, 0x03000002, 0x80030000, 0xb0e40001, 0xa0e40000, 
	0x03000002, 0x80030001, 0xb0e40001, 0xa01b0000, 0x03000002, 0x80030002, 
	0xb0e40001, 0xa0e40001, 0x03000002, 0x80030003, 0xb0e40001, 0xa01b0001, 
	0x03000042, 0x800f0000, 0x80e40000, 0xa0e40801, 0x03000042, 0x800f0001, 
	0x80e40001, 0xa0e40801, 0x03000042, 0x800f0002, 0x80e40002, 0xa0e40801, 
	0x03000042, 0x800f0003, 0x80e40003, 0xa0e40801, 0x03000002, 0x80010000, 
	0x80e40008, 0x81000000, 0x03000002, 0x80020000, 0x80e40008, 0x81000001, 
	0x03000002, 0x80040000, 0x80e40008, 0x81000002, 0x03000002, 0x80080000, 
	0x80e40008, 0x81000003, 0x04000058, 0x800f0009, 0x81e40000, 0xa0550012, 
	0xa0000012, 0x03000009, 0x800f000a, 0x80e40009, 0xa0aa0012, 0x03000042, 
	0x800f0001, 0xb0e40000, 0xa0e40800, 0x03000042, 0x800f0003, 0xb0e40000, 
	0xa0e40803, 0x03000008, 0x801f0002, 0x80e40003, 0xb0e40003, 0x03000005, 
	0x800f0002, 0x80e40002, 0xa0e40015, 0x03000002, 0x800f0002, 0x80e40002, 
	0xa0e40014, 0x03000005, 0x800f0000, 0x80e40001, 0x80e40002, 0x03000008, 
	0x801f0002, 0x80e40003, 0xb0e40004, 0x03000020, 0x800f0002, 0x80000002, 
	0xa0ff0017, 0x04000004, 0x801f0000, 0x80e40002, 0xa0e40016, 0x80e40000, 
	0x03000005, 0x80070000, 0x80e4000a, 0x80e40000, 0x03000002, 0x80070000, 
	0x80e40000, 0x90e40001, 0x02000001, 0x80080000, 0x80e40001, 0x02000001, 
	0x800f0800, 0x80e40000, 0x0000ffff, 
};
	Compile("object_scene_bump.psh",shader);
