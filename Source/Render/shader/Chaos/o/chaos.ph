static DWORD shader[]={
	0xffff0200, 0x05000051, 0xa00f0000, 0x3dcccccd, 0x3dcccccd, 0x3dcccccd, 
	0x3dcccccd, 0x0200001f, 0x90000000, 0xa00f0800, 0x0200001f, 0x90000000, 
	0xa00f0801, 0x0200001f, 0x90000000, 0xa00f0802, 0x0200001f, 0x90000000, 
	0xa00f0803, 0x0200001f, 0x80000000, 0xb0030000, 0x0200001f, 0x80000000, 
	0xb0030001, 0x0200001f, 0x80000000, 0xb0030002, 0x0200001f, 0x80000000, 
	0xb0030003, 0x03000042, 0x800f0002, 0xb0e40002, 0xa0e40802, 0x03000042, 
	0x800f0003, 0xb0e40003, 0xa0e40802, 0x03000002, 0x80070003, 0x80e40002, 
	0x80e40003, 0x03000005, 0x80070003, 0x80e40003, 0xa0e40000, 0x03000002, 
	0x80030002, 0x80e40003, 0xb0e40000, 0x03000042, 0x800f0000, 0x80e40002, 
	0xa0e40800, 0x03000002, 0x80030002, 0x80e40003, 0xb0e40001, 0x03000042, 
	0x800f0001, 0x80e40002, 0xa0e40801, 0x03000002, 0x800f0000, 0x80e40000, 
	0x80e40001, 0x02000001, 0x800f0800, 0x80e40000, 0x0000ffff, 
};
	Compile("chaos.psh",shader);
