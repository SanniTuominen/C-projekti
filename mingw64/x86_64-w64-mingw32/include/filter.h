/*** Autogenerated by WIDL 9.8 from include/filter.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __filter_h__
#define __filter_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IFilter_FWD_DEFINED__
#define __IFilter_FWD_DEFINED__
typedef interface IFilter IFilter;
#ifdef __cplusplus
interface IFilter;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <objidl.h>
#include <propidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IFilter_FWD_DEFINED__
#define __IFilter_FWD_DEFINED__
typedef interface IFilter IFilter;
#ifdef __cplusplus
interface IFilter;
#endif /* __cplusplus */
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#ifndef _TAGFULLPROPSPEC_DEFINED_
#define _TAGFULLPROPSPEC_DEFINED_
typedef struct tagFULLPROPSPEC {
    GUID guidPropSet;
    PROPSPEC psProperty;
} FULLPROPSPEC;
#endif
#ifndef _tagIFILTER_INIT_DEFINED
#define _tagIFILTER_INIT_DEFINED
typedef enum tagIFILTER_INIT {
    IFILTER_INIT_CANON_PARAGRAPHS = 0x1,
    IFILTER_INIT_HARD_LINE_BREAKS = 0x2,
    IFILTER_INIT_CANON_HYPHENS = 0x4,
    IFILTER_INIT_CANON_SPACES = 0x8,
    IFILTER_INIT_APPLY_INDEX_ATTRIBUTES = 0x10,
    IFILTER_INIT_APPLY_OTHER_ATTRIBUTES = 0x20,
    IFILTER_INIT_INDEXING_ONLY = 0x40,
    IFILTER_INIT_SEARCH_LINKS = 0x80,
    IFILTER_INIT_APPLY_CRAWL_ATTRIBUTES = 0x100,
    IFILTER_INIT_FILTER_OWNED_VALUE_OK = 0x200,
    IFILTER_INIT_FILTER_AGGRESSIVE_BREAK = 0x400,
    IFILTER_INIT_DISABLE_EMBEDDED = 0x800,
    IFILTER_INIT_EMIT_FORMATTING = 0x1000
} IFILTER_INIT;
#define _IFILTER_INIT_DEFINED
#endif
#ifndef _tagIFILTER_FLAGS_DEFINED
#define _tagIFILTER_FLAGS_DEFINED
typedef enum tagIFILTER_FLAGS {
    IFILTER_FLAGS_OLE_PROPERTIES = 1
} IFILTER_FLAGS;
#define _IFILTER_FLAGS_DEFINED
#endif
#ifndef _tagCHUNKSTATE_DEFINED
#define _tagCHUNKSTATE_DEFINED
typedef enum tagCHUNKSTATE {
    CHUNK_TEXT = 0x1,
    CHUNK_VALUE = 0x2,
    CHUNK_FILTER_OWNED_VALUE = 0x4
} CHUNKSTATE;
#define _CHUNKSTATE_DEFINED
#endif
#ifndef _tagCHUNK_BREAKTYPE_DEFINED
#define _tagCHUNK_BREAKTYPE_DEFINED
typedef enum tagCHUNK_BREAKTYPE {
    CHUNK_NO_BREAK = 0,
    CHUNK_EOW = 1,
    CHUNK_EOS = 2,
    CHUNK_EOP = 3,
    CHUNK_EOC = 4
} CHUNK_BREAKTYPE;
#define _CHUNK_BREAKTYPE_DEFINED
#endif
#ifndef _tagFILTERREGION_DEFINED
#define _tagFILTERREGION_DEFINED
typedef struct tagFILTERREGION {
    ULONG idChunk;
    ULONG cwcStart;
    ULONG cwcExtent;
} FILTERREGION;
#define _FILTERREGION_DEFINED
#endif
#ifndef _tagSTAT_CHUNK_DEFINED
#define _tagSTAT_CHUNK_DEFINED
typedef struct tagSTAT_CHUNK {
    ULONG idChunk;
    CHUNK_BREAKTYPE breakType;
    CHUNKSTATE flags;
    LCID locale;
    FULLPROPSPEC attribute;
    ULONG idChunkSource;
    ULONG cwcStartSource;
    ULONG cwcLenSource;
} STAT_CHUNK;
#define _STAT_CHUNK_DEFINED
#endif
/*****************************************************************************
 * IFilter interface
 */
#ifndef __IFilter_INTERFACE_DEFINED__
#define __IFilter_INTERFACE_DEFINED__

DEFINE_GUID(IID_IFilter, 0x89bcb740, 0x6119, 0x101a, 0xbc,0xb7, 0x00,0xdd,0x01,0x06,0x55,0xaf);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("89bcb740-6119-101a-bcb7-00dd010655af")
IFilter : public IUnknown
{
    virtual SCODE STDMETHODCALLTYPE Init(
        ULONG grfFlags,
        ULONG cAttributes,
        const FULLPROPSPEC *aAttributes,
        ULONG *pFlags) = 0;

    virtual SCODE STDMETHODCALLTYPE GetChunk(
        STAT_CHUNK *pStat) = 0;

    virtual SCODE STDMETHODCALLTYPE GetText(
        ULONG *pcwcBuffer,
        WCHAR *awcBuffer) = 0;

    virtual SCODE STDMETHODCALLTYPE GetValue(
        PROPVARIANT **ppPropValue) = 0;

    virtual SCODE STDMETHODCALLTYPE BindRegion(
        FILTERREGION origPos,
        REFIID riid,
        void **ppunk) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IFilter, 0x89bcb740, 0x6119, 0x101a, 0xbc,0xb7, 0x00,0xdd,0x01,0x06,0x55,0xaf)
#endif
#else
typedef struct IFilterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFilter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFilter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFilter *This);

    /*** IFilter methods ***/
    SCODE (STDMETHODCALLTYPE *Init)(
        IFilter *This,
        ULONG grfFlags,
        ULONG cAttributes,
        const FULLPROPSPEC *aAttributes,
        ULONG *pFlags);

    SCODE (STDMETHODCALLTYPE *GetChunk)(
        IFilter *This,
        STAT_CHUNK *pStat);

    SCODE (STDMETHODCALLTYPE *GetText)(
        IFilter *This,
        ULONG *pcwcBuffer,
        WCHAR *awcBuffer);

    SCODE (STDMETHODCALLTYPE *GetValue)(
        IFilter *This,
        PROPVARIANT **ppPropValue);

    SCODE (STDMETHODCALLTYPE *BindRegion)(
        IFilter *This,
        FILTERREGION origPos,
        REFIID riid,
        void **ppunk);

    END_INTERFACE
} IFilterVtbl;

interface IFilter {
    CONST_VTBL IFilterVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IFilter_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IFilter_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IFilter_Release(This) (This)->lpVtbl->Release(This)
/*** IFilter methods ***/
#define IFilter_Init(This,grfFlags,cAttributes,aAttributes,pFlags) (This)->lpVtbl->Init(This,grfFlags,cAttributes,aAttributes,pFlags)
#define IFilter_GetChunk(This,pStat) (This)->lpVtbl->GetChunk(This,pStat)
#define IFilter_GetText(This,pcwcBuffer,awcBuffer) (This)->lpVtbl->GetText(This,pcwcBuffer,awcBuffer)
#define IFilter_GetValue(This,ppPropValue) (This)->lpVtbl->GetValue(This,ppPropValue)
#define IFilter_BindRegion(This,origPos,riid,ppunk) (This)->lpVtbl->BindRegion(This,origPos,riid,ppunk)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IFilter_QueryInterface(IFilter* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IFilter_AddRef(IFilter* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IFilter_Release(IFilter* This) {
    return This->lpVtbl->Release(This);
}
/*** IFilter methods ***/
static __WIDL_INLINE SCODE IFilter_Init(IFilter* This,ULONG grfFlags,ULONG cAttributes,const FULLPROPSPEC *aAttributes,ULONG *pFlags) {
    return This->lpVtbl->Init(This,grfFlags,cAttributes,aAttributes,pFlags);
}
static __WIDL_INLINE SCODE IFilter_GetChunk(IFilter* This,STAT_CHUNK *pStat) {
    return This->lpVtbl->GetChunk(This,pStat);
}
static __WIDL_INLINE SCODE IFilter_GetText(IFilter* This,ULONG *pcwcBuffer,WCHAR *awcBuffer) {
    return This->lpVtbl->GetText(This,pcwcBuffer,awcBuffer);
}
static __WIDL_INLINE SCODE IFilter_GetValue(IFilter* This,PROPVARIANT **ppPropValue) {
    return This->lpVtbl->GetValue(This,ppPropValue);
}
static __WIDL_INLINE SCODE IFilter_BindRegion(IFilter* This,FILTERREGION origPos,REFIID riid,void **ppunk) {
    return This->lpVtbl->BindRegion(This,origPos,riid,ppunk);
}
#endif
#endif

#endif


#endif  /* __IFilter_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);
ULONG           __RPC_USER LPSAFEARRAY_UserSize     (ULONG *, ULONG, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal  (ULONG *, unsigned char *, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
void            __RPC_USER LPSAFEARRAY_UserFree     (ULONG *, LPSAFEARRAY *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __filter_h__ */
