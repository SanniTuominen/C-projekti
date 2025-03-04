/*** Autogenerated by WIDL 9.8 from include/vsadmin.idl - Do not edit ***/

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

#ifndef __vsadmin_h__
#define __vsadmin_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IVssAdmin_FWD_DEFINED__
#define __IVssAdmin_FWD_DEFINED__
typedef interface IVssAdmin IVssAdmin;
#ifdef __cplusplus
interface IVssAdmin;
#endif /* __cplusplus */
#endif

#ifndef __IVssAdminEx_FWD_DEFINED__
#define __IVssAdminEx_FWD_DEFINED__
typedef interface IVssAdminEx IVssAdminEx;
#ifdef __cplusplus
interface IVssAdminEx;
#endif /* __cplusplus */
#endif

#ifndef __VSSCoordinator_FWD_DEFINED__
#define __VSSCoordinator_FWD_DEFINED__
#ifdef __cplusplus
typedef class VSSCoordinator VSSCoordinator;
#else
typedef struct VSSCoordinator VSSCoordinator;
#endif /* defined __cplusplus */
#endif /* defined __VSSCoordinator_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>
#include <vss.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * IVssAdmin interface
 */
#ifndef __IVssAdmin_INTERFACE_DEFINED__
#define __IVssAdmin_INTERFACE_DEFINED__

DEFINE_GUID(IID_IVssAdmin, 0x77ed5996, 0x2f63, 0x11d3, 0x8a,0x39, 0x00,0xc0,0x4f,0x72,0xd8,0xe3);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("77ed5996-2f63-11d3-8a39-00c04f72d8e3")
IVssAdmin : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE RegisterProvider(
        VSS_ID pProviderId,
        CLSID ClassId,
        VSS_PWSZ pwszProviderName,
        VSS_PROVIDER_TYPE eProviderType,
        VSS_PWSZ pwszProviderVersion,
        VSS_ID ProviderVersionId) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnregisterProvider(
        VSS_ID ProviderId) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryProviders(
        IVssEnumObject **ppEnum) = 0;

    virtual HRESULT STDMETHODCALLTYPE AbortAllSnapshotsInProgress(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IVssAdmin, 0x77ed5996, 0x2f63, 0x11d3, 0x8a,0x39, 0x00,0xc0,0x4f,0x72,0xd8,0xe3)
#endif
#else
typedef struct IVssAdminVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IVssAdmin *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IVssAdmin *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IVssAdmin *This);

    /*** IVssAdmin methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterProvider)(
        IVssAdmin *This,
        VSS_ID pProviderId,
        CLSID ClassId,
        VSS_PWSZ pwszProviderName,
        VSS_PROVIDER_TYPE eProviderType,
        VSS_PWSZ pwszProviderVersion,
        VSS_ID ProviderVersionId);

    HRESULT (STDMETHODCALLTYPE *UnregisterProvider)(
        IVssAdmin *This,
        VSS_ID ProviderId);

    HRESULT (STDMETHODCALLTYPE *QueryProviders)(
        IVssAdmin *This,
        IVssEnumObject **ppEnum);

    HRESULT (STDMETHODCALLTYPE *AbortAllSnapshotsInProgress)(
        IVssAdmin *This);

    END_INTERFACE
} IVssAdminVtbl;

interface IVssAdmin {
    CONST_VTBL IVssAdminVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IVssAdmin_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IVssAdmin_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IVssAdmin_Release(This) (This)->lpVtbl->Release(This)
/*** IVssAdmin methods ***/
#define IVssAdmin_RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId) (This)->lpVtbl->RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId)
#define IVssAdmin_UnregisterProvider(This,ProviderId) (This)->lpVtbl->UnregisterProvider(This,ProviderId)
#define IVssAdmin_QueryProviders(This,ppEnum) (This)->lpVtbl->QueryProviders(This,ppEnum)
#define IVssAdmin_AbortAllSnapshotsInProgress(This) (This)->lpVtbl->AbortAllSnapshotsInProgress(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IVssAdmin_QueryInterface(IVssAdmin* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IVssAdmin_AddRef(IVssAdmin* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IVssAdmin_Release(IVssAdmin* This) {
    return This->lpVtbl->Release(This);
}
/*** IVssAdmin methods ***/
static __WIDL_INLINE HRESULT IVssAdmin_RegisterProvider(IVssAdmin* This,VSS_ID pProviderId,CLSID ClassId,VSS_PWSZ pwszProviderName,VSS_PROVIDER_TYPE eProviderType,VSS_PWSZ pwszProviderVersion,VSS_ID ProviderVersionId) {
    return This->lpVtbl->RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId);
}
static __WIDL_INLINE HRESULT IVssAdmin_UnregisterProvider(IVssAdmin* This,VSS_ID ProviderId) {
    return This->lpVtbl->UnregisterProvider(This,ProviderId);
}
static __WIDL_INLINE HRESULT IVssAdmin_QueryProviders(IVssAdmin* This,IVssEnumObject **ppEnum) {
    return This->lpVtbl->QueryProviders(This,ppEnum);
}
static __WIDL_INLINE HRESULT IVssAdmin_AbortAllSnapshotsInProgress(IVssAdmin* This) {
    return This->lpVtbl->AbortAllSnapshotsInProgress(This);
}
#endif
#endif

#endif


#endif  /* __IVssAdmin_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IVssAdminEx interface
 */
#ifndef __IVssAdminEx_INTERFACE_DEFINED__
#define __IVssAdminEx_INTERFACE_DEFINED__

DEFINE_GUID(IID_IVssAdminEx, 0x7858a9f8, 0xb1fa, 0x41a6, 0x96,0x4f, 0xb9,0xb3,0x6b,0x8c,0xd8,0xd8);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7858a9f8-b1fa-41a6-964f-b9b36b8cd8d8")
IVssAdminEx : public IVssAdmin
{
    virtual HRESULT STDMETHODCALLTYPE GetProviderCapability(
        VSS_ID pProviderId,
        ULONGLONG *pllOriginalCapabilityMask) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProviderContext(
        VSS_ID ProviderId,
        LONG *plContext) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetProviderContext(
        VSS_ID ProviderId,
        LONG lContext) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IVssAdminEx, 0x7858a9f8, 0xb1fa, 0x41a6, 0x96,0x4f, 0xb9,0xb3,0x6b,0x8c,0xd8,0xd8)
#endif
#else
typedef struct IVssAdminExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IVssAdminEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IVssAdminEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IVssAdminEx *This);

    /*** IVssAdmin methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterProvider)(
        IVssAdminEx *This,
        VSS_ID pProviderId,
        CLSID ClassId,
        VSS_PWSZ pwszProviderName,
        VSS_PROVIDER_TYPE eProviderType,
        VSS_PWSZ pwszProviderVersion,
        VSS_ID ProviderVersionId);

    HRESULT (STDMETHODCALLTYPE *UnregisterProvider)(
        IVssAdminEx *This,
        VSS_ID ProviderId);

    HRESULT (STDMETHODCALLTYPE *QueryProviders)(
        IVssAdminEx *This,
        IVssEnumObject **ppEnum);

    HRESULT (STDMETHODCALLTYPE *AbortAllSnapshotsInProgress)(
        IVssAdminEx *This);

    /*** IVssAdminEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProviderCapability)(
        IVssAdminEx *This,
        VSS_ID pProviderId,
        ULONGLONG *pllOriginalCapabilityMask);

    HRESULT (STDMETHODCALLTYPE *GetProviderContext)(
        IVssAdminEx *This,
        VSS_ID ProviderId,
        LONG *plContext);

    HRESULT (STDMETHODCALLTYPE *SetProviderContext)(
        IVssAdminEx *This,
        VSS_ID ProviderId,
        LONG lContext);

    END_INTERFACE
} IVssAdminExVtbl;

interface IVssAdminEx {
    CONST_VTBL IVssAdminExVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IVssAdminEx_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IVssAdminEx_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IVssAdminEx_Release(This) (This)->lpVtbl->Release(This)
/*** IVssAdmin methods ***/
#define IVssAdminEx_RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId) (This)->lpVtbl->RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId)
#define IVssAdminEx_UnregisterProvider(This,ProviderId) (This)->lpVtbl->UnregisterProvider(This,ProviderId)
#define IVssAdminEx_QueryProviders(This,ppEnum) (This)->lpVtbl->QueryProviders(This,ppEnum)
#define IVssAdminEx_AbortAllSnapshotsInProgress(This) (This)->lpVtbl->AbortAllSnapshotsInProgress(This)
/*** IVssAdminEx methods ***/
#define IVssAdminEx_GetProviderCapability(This,pProviderId,pllOriginalCapabilityMask) (This)->lpVtbl->GetProviderCapability(This,pProviderId,pllOriginalCapabilityMask)
#define IVssAdminEx_GetProviderContext(This,ProviderId,plContext) (This)->lpVtbl->GetProviderContext(This,ProviderId,plContext)
#define IVssAdminEx_SetProviderContext(This,ProviderId,lContext) (This)->lpVtbl->SetProviderContext(This,ProviderId,lContext)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IVssAdminEx_QueryInterface(IVssAdminEx* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IVssAdminEx_AddRef(IVssAdminEx* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IVssAdminEx_Release(IVssAdminEx* This) {
    return This->lpVtbl->Release(This);
}
/*** IVssAdmin methods ***/
static __WIDL_INLINE HRESULT IVssAdminEx_RegisterProvider(IVssAdminEx* This,VSS_ID pProviderId,CLSID ClassId,VSS_PWSZ pwszProviderName,VSS_PROVIDER_TYPE eProviderType,VSS_PWSZ pwszProviderVersion,VSS_ID ProviderVersionId) {
    return This->lpVtbl->RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId);
}
static __WIDL_INLINE HRESULT IVssAdminEx_UnregisterProvider(IVssAdminEx* This,VSS_ID ProviderId) {
    return This->lpVtbl->UnregisterProvider(This,ProviderId);
}
static __WIDL_INLINE HRESULT IVssAdminEx_QueryProviders(IVssAdminEx* This,IVssEnumObject **ppEnum) {
    return This->lpVtbl->QueryProviders(This,ppEnum);
}
static __WIDL_INLINE HRESULT IVssAdminEx_AbortAllSnapshotsInProgress(IVssAdminEx* This) {
    return This->lpVtbl->AbortAllSnapshotsInProgress(This);
}
/*** IVssAdminEx methods ***/
static __WIDL_INLINE HRESULT IVssAdminEx_GetProviderCapability(IVssAdminEx* This,VSS_ID pProviderId,ULONGLONG *pllOriginalCapabilityMask) {
    return This->lpVtbl->GetProviderCapability(This,pProviderId,pllOriginalCapabilityMask);
}
static __WIDL_INLINE HRESULT IVssAdminEx_GetProviderContext(IVssAdminEx* This,VSS_ID ProviderId,LONG *plContext) {
    return This->lpVtbl->GetProviderContext(This,ProviderId,plContext);
}
static __WIDL_INLINE HRESULT IVssAdminEx_SetProviderContext(IVssAdminEx* This,VSS_ID ProviderId,LONG lContext) {
    return This->lpVtbl->SetProviderContext(This,ProviderId,lContext);
}
#endif
#endif

#endif


#endif  /* __IVssAdminEx_INTERFACE_DEFINED__ */

#ifndef __VSSAdmin_LIBRARY_DEFINED__
#define __VSSAdmin_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_VSSAdmin, 0x9148a774, 0x0304, 0x4243, 0xb2,0x69, 0xa3,0x39,0xaa,0x96,0xd2,0x64);

/*****************************************************************************
 * VSSCoordinator coclass
 */

DEFINE_GUID(CLSID_VSSCoordinator, 0xe579ab5f, 0x1cc4, 0x44b4, 0xbe,0xd9, 0xde,0x09,0x91,0xff,0x06,0x23);

#ifdef __cplusplus
class DECLSPEC_UUID("e579ab5f-1cc4-44b4-bed9-de0991ff0623") VSSCoordinator;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(VSSCoordinator, 0xe579ab5f, 0x1cc4, 0x44b4, 0xbe,0xd9, 0xde,0x09,0x91,0xff,0x06,0x23)
#endif
#endif

#endif /* __VSSAdmin_LIBRARY_DEFINED__ */
#endif /* WINAPI_PARTITION_DESKTOP */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __vsadmin_h__ */
