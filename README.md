# ProtobufWinDemo

Reproduce:

```bash
vcpkg install --triplet x64-windows-static
cmake -B out
cmake --build out --config Release
```

Logs:

```
D:\VS2019\ProtobufWinDemo\vcpkg_installed\x64-windows-static\include\google/protobuf/has_bits.h(84): message : see reference to class template instantiation 'google::protobuf::internal::HasBits<1>' being compiled [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
  Generating Code...
libprotobuf.lib(coded_stream.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(arena.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(message_lite.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(generated_message_util.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(parse_context.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(common.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(strutil.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(zero_copy_stream.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(zero_copy_stream_impl_lite.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(zero_copy_stream_impl.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(extension_set.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(structurally_valid.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(repeated_field.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(wire_format_lite.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(status.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(int128.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(stringpiece.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(io_win32.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(repeated_ptr_field.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libprotobuf.lib(implicit_weak_message.cc.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
msvcprt.lib(MSVCP140.dll) : error LNK2005: "public: int __cdecl std::basic_streambuf<char,struct std::char_traits<char> >::sputc(char)" (?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QEAAHD@Z) already defined in libprotobuf.lib(status.cc.obj) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
msvcprt.lib(MSVCP140.dll) : error LNK2005: "public: __int64 __cdecl std::basic_streambuf<char,struct std::char_traits<char> >::sputn(char const *,__int64)" (?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QEAA_JPEBD_J@Z) already defined in libprotobuf.lib(zero_copy_stream_impl.cc.obj) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
msvcprt.lib(MSVCP140.dll) : error LNK2005: "public: void __cdecl std::basic_ios<char,struct std::char_traits<char> >::setstate(int,bool)" (?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QEAAXH_N@Z) already defined in libprotobuf.lib(common.cc.obj) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
msvcprt.lib(MSVCP140.dll) : error LNK2005: "public: char __cdecl std::basic_ios<char,struct std::char_traits<char> >::widen(char)const " (?widen@?$basic_ios@DU?$char_traits@D@std@@@std@@QEBADD@Z) already defined in libprotobuf.lib(common.cc.obj) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
msvcprt.lib(MSVCP140.dll) : error LNK2005: "public: void __cdecl std::basic_ostream<char,struct std::char_traits<char> >::_Osfx(void)" (?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAAXXZ) already defined in libprotobuf.lib(zero_copy_stream_impl.cc.obj) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
msvcprt.lib(MSVCP140.dll) : error LNK2005: "public: class std::basic_ostream<char,struct std::char_traits<char> > & __cdecl std::basic_ostream<char,struct std::char_traits<char> >::flush(void)" (?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAAAEAV12@XZ) already defined in libprotobuf.lib(zero_copy_stream_impl.cc.obj) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(locale0.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(locale0.obj) : error LNK2005: "void __cdecl std::_Facet_Register(class std::_Facet_base *)" (?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z) already defined in msvcprt.lib(locale0_implib.obj) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(locale0.obj) : error LNK2005: "private: static class std::locale::_Locimp * __cdecl std::locale::_Getgloballocale(void)" (?_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ) already defined in msvcprt.lib(MSVCP140.dll) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(locale0.obj) : error LNK2005: "private: static class std::locale::_Locimp * __cdecl std::locale::_Init(bool)" (?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z) already defined in msvcprt.lib(MSVCP140.dll) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(locale0.obj) : error LNK2005: "public: static void __cdecl std::_Locinfo::_Locinfo_ctor(class std::_Locinfo *,char const *)" (?_Locinfo_ctor@_Locinfo@std@@SAXPEAV12@PEBD@Z) already defined in msvcprt.lib(MSVCP140.dll) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(locale0.obj) : error LNK2005: "public: static void __cdecl std::_Locinfo::_Locinfo_dtor(class std::_Locinfo *)" (?_Locinfo_dtor@_Locinfo@std@@SAXPEAV12@@Z) already defined in msvcprt.lib(MSVCP140.dll) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(locale.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(iosptrs.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(wlocale.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xlocale.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xstol.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xstoul.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xstoll.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xstoull.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xlock.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xlock.obj) : error LNK2005: "public: __cdecl std::_Lockit::_Lockit(int)" (??0_Lockit@std@@QEAA@H@Z) already defined in msvcprt.lib(MSVCP140.dll) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xlock.obj) : error LNK2005: "public: __cdecl std::_Lockit::~_Lockit(void)" (??1_Lockit@std@@QEAA@XZ) already defined in msvcprt.lib(MSVCP140.dll) [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xstrcoll.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xdateord.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xwcscoll.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xwcsxfrm.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xstrxfrm.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(xmtx.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(StlCompareStringA.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(StlCompareStringW.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(StlLCMapStringW.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
libcpmt.lib(StlLCMapStringA.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MT_StaticRelease' doesn't match value 'MD_DynamicRelease' in Main.obj [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
LINK : warning LNK4098: defaultlib 'LIBCMT' conflicts with use of other libs; use /NODEFAULTLIB:library [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
D:\VS2019\ProtobufWinDemo\out\Release\Main.exe : fatal error LNK1169: one or more multiply defined symbols found [D:\VS2019\ProtobufWinDemo\out\Main.vcxproj]
```
