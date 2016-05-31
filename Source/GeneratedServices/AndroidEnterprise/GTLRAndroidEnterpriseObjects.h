// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play EMM API (androidenterprise/v1)
// Description:
//   Manages the deployment of apps to Android for Work users.
// Documentation:
//   https://developers.google.com/android/work/play/emm-api

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAndroidEnterprise_AppRestrictionsSchemaRestriction;
@class GTLRAndroidEnterprise_AppRestrictionsSchemaRestrictionRestrictionValue;
@class GTLRAndroidEnterprise_ApprovalUrlInfo;
@class GTLRAndroidEnterprise_AppVersion;
@class GTLRAndroidEnterprise_Collection;
@class GTLRAndroidEnterprise_Device;
@class GTLRAndroidEnterprise_Enterprise;
@class GTLRAndroidEnterprise_Entitlement;
@class GTLRAndroidEnterprise_GroupLicense;
@class GTLRAndroidEnterprise_Install;
@class GTLRAndroidEnterprise_LocalizedText;
@class GTLRAndroidEnterprise_PageInfo;
@class GTLRAndroidEnterprise_Product;
@class GTLRAndroidEnterprise_ProductPermission;
@class GTLRAndroidEnterprise_StoreCluster;
@class GTLRAndroidEnterprise_StorePage;
@class GTLRAndroidEnterprise_TokenPagination;
@class GTLRAndroidEnterprise_User;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Represents the list of app restrictions available to be pre-configured for
 *  the product.
 */
@interface GTLRAndroidEnterprise_AppRestrictionsSchema : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#appRestrictionsSchema".
 */
@property(copy, nullable) NSString *kind;

/** The set of restrictions that make up this schema. */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_AppRestrictionsSchemaRestriction *> *restrictions;

@end


/**
 *  A restriction in the App Restriction Schema represents a piece of
 *  configuration that may be pre-applied.
 */
@interface GTLRAndroidEnterprise_AppRestrictionsSchemaRestriction : GTLRObject

/** The default value of the restriction. */
@property(strong, nullable) GTLRAndroidEnterprise_AppRestrictionsSchemaRestrictionRestrictionValue *defaultValue;

/**
 *  A longer description of the restriction, giving more detail of what it
 *  affects.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(copy, nullable) NSString *descriptionProperty;

/**
 *  For choice or multiselect restrictions, the list of possible entries'
 *  human-readable names.
 */
@property(strong, nullable) NSArray<NSString *> *entry;

/**
 *  For choice or multiselect restrictions, the list of possible entries'
 *  machine-readable values.
 */
@property(strong, nullable) NSArray<NSString *> *entryValue;

/**
 *  The unique key that the product uses to identify the restriction, e.g.
 *  "com.google.android.gm.fieldname".
 */
@property(copy, nullable) NSString *key;

/** The type of the restriction. */
@property(copy, nullable) NSString *restrictionType;

/** The name of the restriction. */
@property(copy, nullable) NSString *title;

@end


/**
 *  A typed value for the restriction.
 */
@interface GTLRAndroidEnterprise_AppRestrictionsSchemaRestrictionRestrictionValue : GTLRObject

/** The type of the value being provided. */
@property(copy, nullable) NSString *type;

/**
 *  The boolean value - this will only be present if type is bool.
 *
 *  Uses NSNumber of boolValue.
 */
@property(strong, nullable) NSNumber *valueBool;

/**
 *  The integer value - this will only be present if type is integer.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *valueInteger;

/**
 *  The list of string values - this will only be present if type is
 *  multiselect.
 */
@property(strong, nullable) NSArray<NSString *> *valueMultiselect;

/**
 *  The string value - this will be present for types string, choice and hidden.
 */
@property(copy, nullable) NSString *valueString;

@end


/**
 *  Information on an approval URL.
 */
@interface GTLRAndroidEnterprise_ApprovalUrlInfo : GTLRObject

/**
 *  A URL that displays a product's permissions and that can also be used to
 *  approve the product with the Products.approve call.
 */
@property(copy, nullable) NSString *approvalUrl;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#approvalUrlInfo".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  This represents a single version of the app.
 */
@interface GTLRAndroidEnterprise_AppVersion : GTLRObject

/**
 *  Unique increasing identifier for the app version.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *versionCode;

/**
 *  The string used in the Play Store by the app developer to identify the
 *  version. The string is not necessarily unique or localized (for example, the
 *  string could be "1.4").
 */
@property(copy, nullable) NSString *versionString;

@end


/**
 *  A collection resource defines a named set of apps that is visible to a set
 *  of users in the Google Play Store app running on those users' managed
 *  devices. Those users can then install any of those apps if they wish (which
 *  will trigger creation of install and entitlement resources). A user cannot
 *  install an app on a managed device unless the app is listed in at least one
 *  collection that is visible to that user.
 *  Note that the API can be used to directly install an app regardless of
 *  whether it is in any collection - so an enterprise has a choice of either
 *  directly pushing apps to users, or allowing users to install apps if they
 *  want. Which is appropriate will depend on the enterprise's policies and the
 *  purpose of the apps concerned.
 */
@interface GTLRAndroidEnterprise_Collection : GTLRObject

/** Arbitrary unique ID, allocated by the API on creation. */
@property(copy, nullable) NSString *collectionId;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#collection".
 */
@property(copy, nullable) NSString *kind;

/**
 *  A user-friendly name for the collection (should be unique), e.g. "Accounting
 *  apps".
 */
@property(copy, nullable) NSString *name;

/**
 *  The IDs of the products in the collection, in the order in which they should
 *  be displayed.
 */
@property(strong, nullable) NSArray<NSString *> *productId;

/**
 *  Whether this collection is visible to all users, or only to the users that
 *  have been granted access through the "Collectionviewers" API. With the
 *  launch of the "setAvailableProductSet" API, this property should always be
 *  set to "viewersOnly", as the "allUsers" option will bypass the
 *  "availableProductSet" for all users within a domain.
 *  The "allUsers" setting is deprecated, and will be removed.
 */
@property(copy, nullable) NSString *visibility;

@end


/**
 *  The collection resources for the enterprise.
 */
@interface GTLRAndroidEnterprise_CollectionsListResponse : GTLRObject

/**
 *  An ordered collection of products which can be made visible on the Google
 *  Play Store to a selected group of users.
 */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_Collection *> *collection;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#collectionsListResponse".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  The user resources for the collection.
 */
@interface GTLRAndroidEnterprise_CollectionViewersListResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#collectionViewersListResponse".
 */
@property(copy, nullable) NSString *kind;

/** A user of an enterprise. */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_User *> *user;

@end


/**
 *  A device resource represents a mobile device managed by the EMM and
 *  belonging to a specific enterprise user.
 *  This collection cannot be modified via the API; it is automatically
 *  populated as devices are set up to be managed.
 */
@interface GTLRAndroidEnterprise_Device : GTLRObject

/**
 *  The Google Play Services Android ID for the device encoded as a lowercase
 *  hex string, e.g. "123456789abcdef0".
 */
@property(copy, nullable) NSString *androidId;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#device".
 */
@property(copy, nullable) NSString *kind;

/**
 *  The mechanism by which this device is managed by the EMM. "managedDevice"
 *  means that the EMM's app is a device owner. "managedProfile" means that the
 *  EMM's app is the profile owner (and there is a separate personal profile
 *  which is not managed). "containerApp" means that the EMM's app is managing
 *  the Android for Work container app on the device. ?unmanagedProfile? means
 *  that the EMM?s app is managing a managed user on an unmanaged device
 */
@property(copy, nullable) NSString *managementType;

@end


/**
 *  The device resources for the user.
 */
@interface GTLRAndroidEnterprise_DevicesListResponse : GTLRObject

/** A managed device. */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_Device *> *device;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#devicesListResponse".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  The state of a user's device, as accessed by the getState and setState
 *  methods on device resources.
 */
@interface GTLRAndroidEnterprise_DeviceState : GTLRObject

/**
 *  The state of the Google account on the device. "enabled" indicates that the
 *  Google account on the device can be used to access Google services
 *  (including Google Play), while "disabled" means that it cannot. A new device
 *  is initially in the "disabled" state.
 */
@property(copy, nullable) NSString *accountState;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#deviceState".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  An enterprise resource represents a binding between an organization and
 *  their EMM.
 *  To create an enterprise, an admin of the enterprise must first go through a
 *  Play for Work sign-up flow. At the end of this the admin will be presented
 *  with a token (a short opaque alphanumeric string). They must then present
 *  this to the EMM, who then supplies it to the enroll method. Until this is
 *  done the EMM will not have any access to the enterprise.
 *  After calling enroll the EMM should call setAccount to specify the service
 *  account that will be allowed to act on behalf of the enterprise, which will
 *  be required for access to the enterprise's data through this API. Only one
 *  call of setAccount is allowed for a given enterprise; the only way to change
 *  the account later is to unenroll the enterprise and enroll it again
 *  (obtaining a new token).
 *  The EMM can unenroll an enterprise in order to sever the binding between
 *  them. Re-enrolling an enterprise is possible, but requires a new token to be
 *  retrieved. Enterprises.unenroll requires the EMM's credentials (as enroll
 *  does), not the enterprise's. Enterprises.unenroll can only be used for
 *  enterprises that were previously enrolled with the enroll call. Any
 *  enterprises that were enrolled using the (deprecated) Enterprises.insert
 *  call must be unenrolled with Enterprises.delete and can then be re-enrolled
 *  using the Enterprises.enroll call.
 *  The ID for an enterprise is an opaque string. It is returned by insert and
 *  enroll and can also be retrieved if the enterprise's primary domain is known
 *  using the list method.
 */
@interface GTLRAndroidEnterprise_Enterprise : GTLRObject

/**
 *  The unique ID for the enterprise.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(copy, nullable) NSString *identifier;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#enterprise".
 */
@property(copy, nullable) NSString *kind;

/** The name of the enterprise, e.g. "Example Inc". */
@property(copy, nullable) NSString *name;

/** The enterprise's primary domain, e.g. "example.com". */
@property(copy, nullable) NSString *primaryDomain;

@end


/**
 *  A service account that can be used to authenticate as the enterprise to API
 *  calls that require such authentication.
 */
@interface GTLRAndroidEnterprise_EnterpriseAccount : GTLRObject

/** The email address of the service account. */
@property(copy, nullable) NSString *accountEmail;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#enterpriseAccount".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  The matching enterprise resources.
 */
@interface GTLRAndroidEnterprise_EnterprisesListResponse : GTLRObject

/** An enterprise. */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_Enterprise *> *enterprise;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#enterprisesListResponse".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  GTLRAndroidEnterprise_EnterprisesSendTestPushNotificationResponse
 */
@interface GTLRAndroidEnterprise_EnterprisesSendTestPushNotificationResponse : GTLRObject

/** The message ID of the test push notification that was sent. */
@property(copy, nullable) NSString *messageId;

/**
 *  The name of the Cloud Pub/Sub topic to which notifications for this
 *  enterprise's enrolled account will be sent.
 */
@property(copy, nullable) NSString *topicName;

@end


/**
 *  The existence of an entitlement resource means that a user has the right to
 *  use a particular app on any of their devices. This might be because the app
 *  is free or because they have been allocated a license to the app from a
 *  group license purchased by the enterprise.
 *  It should always be true that a user has an app installed on one of their
 *  devices only if they have an entitlement to it. So if an entitlement is
 *  deleted, the app will be uninstalled from all devices. Similarly if the user
 *  installs an app (and is permitted to do so), or the EMM triggers an install
 *  of the app, an entitlement to that app is automatically created. If this is
 *  impossible - e.g. the enterprise has not purchased sufficient licenses -
 *  then installation fails.
 *  Note that entitlements are always user specific, not device specific; a user
 *  may have an entitlement even though they have not installed the app
 *  anywhere. Once they have an entitlement they can install the app on multiple
 *  devices.
 *  The API can be used to create an entitlement. If the app is a free app, a
 *  group license for that app is created. If it's a paid app, creating the
 *  entitlement consumes one license; it remains consumed until the entitlement
 *  is removed. Optionally an installation of the app on all the user's managed
 *  devices can be triggered at the time the entitlement is created. An
 *  entitlement cannot be created for an app if the app requires permissions
 *  that the enterprise has not yet accepted.
 *  Entitlements for paid apps that are due to purchases by the user on a
 *  non-managed profile will have "userPurchase" as entitlement reason; those
 *  entitlements cannot be removed via the API.
 */
@interface GTLRAndroidEnterprise_Entitlement : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#entitlement".
 */
@property(copy, nullable) NSString *kind;

/**
 *  The ID of the product that the entitlement is for, e.g.
 *  "app:com.google.android.gm".
 */
@property(copy, nullable) NSString *productId;

/**
 *  The reason for the entitlement, e.g. "free" for free apps. This is
 *  temporary, it will be replaced by the acquisition kind field of group
 *  licenses.
 */
@property(copy, nullable) NSString *reason;

@end


/**
 *  The entitlement resources for the user.
 */
@interface GTLRAndroidEnterprise_EntitlementsListResponse : GTLRObject

/**
 *  An entitlement of a user to a product (e.g. an app). For example, a free app
 *  that they have installed, or a paid app that they have been allocated a
 *  license to.
 */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_Entitlement *> *entitlement;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#entitlementsListResponse".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  A group license object indicates a product that an enterprise admin has
 *  approved for use in the enterprise. The product may be free or paid. For
 *  free products, a group license object is created in these cases: if the
 *  enterprise admin approves a product in Google Play, if the product is added
 *  to a collection, or if an entitlement for the product is created for a user
 *  via the API. For paid products, a group license object is only created as
 *  part of the first bulk purchase of that product in Google Play by the
 *  enterprise admin.
 *  The API can be used to query group licenses; the available information
 *  includes the total number of licenses purchased (for paid products) and the
 *  total number of licenses that have been provisioned, that is, the total
 *  number of user entitlements in existence for the product.
 *  Group license objects are never deleted. If, for example, a free app is
 *  added to a collection and then removed, the group license will remain,
 *  allowing the enterprise admin to keep track of any remaining entitlements.
 *  An enterprise admin may indicate they are no longer interested in the group
 *  license by marking it as unapproved in Google Play.
 */
@interface GTLRAndroidEnterprise_GroupLicense : GTLRObject

/**
 *  How this group license was acquired. "bulkPurchase" means that this group
 *  license object was created because the enterprise purchased licenses for
 *  this product; this is "free" otherwise (for free products).
 */
@property(copy, nullable) NSString *acquisitionKind;

/**
 *  Whether the product to which this group license relates is currently
 *  approved by the enterprise, as either "approved" or "unapproved". Products
 *  are approved when a group license is first created, but this approval may be
 *  revoked by an enterprise admin via Google Play. Unapproved products will not
 *  be visible to end users in collections and new entitlements to them should
 *  not normally be created.
 */
@property(copy, nullable) NSString *approval;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#groupLicense".
 */
@property(copy, nullable) NSString *kind;

/**
 *  The total number of provisioned licenses for this product. Returned by read
 *  operations, but ignored in write operations.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *numProvisioned;

/**
 *  The number of purchased licenses (possibly in multiple purchases). If this
 *  field is omitted then there is no limit on the number of licenses that can
 *  be provisioned (e.g. if the acquisition kind is "free").
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *numPurchased;

/**
 *  The ID of the product that the license is for, e.g.
 *  "app:com.google.android.gm".
 */
@property(copy, nullable) NSString *productId;

@end


/**
 *  The grouplicense resources for the enterprise.
 */
@interface GTLRAndroidEnterprise_GroupLicensesListResponse : GTLRObject

/** A group license for a product approved for use in the enterprise. */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_GroupLicense *> *groupLicense;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#groupLicensesListResponse".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  The user resources for the group license.
 */
@interface GTLRAndroidEnterprise_GroupLicenseUsersListResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#groupLicenseUsersListResponse".
 */
@property(copy, nullable) NSString *kind;

/** A user of an enterprise. */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_User *> *user;

@end


/**
 *  The existence of an install resource indicates that an app is installed on a
 *  particular device (or that an install is pending).
 *  The API can be used to create an install resource using the update method.
 *  This triggers the actual install of the app on the device. If the user does
 *  not already have an entitlement for the app then an attempt is made to
 *  create one. If this fails (e.g. because the app is not free and there is no
 *  available license) then the creation of the install fails.
 *  The API can also be used to update an installed app. If the update method is
 *  used on an existing install then the app will be updated to the latest
 *  available version.
 *  Note that it is not possible to force the installation of a specific version
 *  of an app; the version code is read-only.
 *  If a user installs an app themselves (as permitted by the enterprise), then
 *  again an install resource and possibly an entitlement resource are
 *  automatically created.
 *  The API can also be used to delete an install resource, which triggers the
 *  removal of the app from the device. Note that deleting an install does not
 *  automatically remove the corresponding entitlement, even if there are no
 *  remaining installs. The install resource will also be deleted if the user
 *  uninstalls the app themselves.
 */
@interface GTLRAndroidEnterprise_Install : GTLRObject

/**
 *  Install state. The state "installPending" means that an install request has
 *  recently been made and download to the device is in progress. The state
 *  "installed" means that the app has been installed. This field is read-only.
 */
@property(copy, nullable) NSString *installState;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#install".
 */
@property(copy, nullable) NSString *kind;

/**
 *  The ID of the product that the install is for, e.g.
 *  "app:com.google.android.gm".
 */
@property(copy, nullable) NSString *productId;

/**
 *  The version of the installed product. Guaranteed to be set only if the
 *  install state is "installed".
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *versionCode;

@end


/**
 *  The install resources for the device.
 */
@interface GTLRAndroidEnterprise_InstallsListResponse : GTLRObject

/**
 *  An installation of an app for a user on a specific device. The existence of
 *  an install implies that the user must have an entitlement to the app.
 */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_Install *> *install;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#installsListResponse".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  A localized string with its locale.
 */
@interface GTLRAndroidEnterprise_LocalizedText : GTLRObject

/** The BCP47 tag for a locale. (e.g. "en-US", "de"). */
@property(copy, nullable) NSString *locale;

/** The text localized in the associated locale. */
@property(copy, nullable) NSString *text;

@end


/**
 *  GTLRAndroidEnterprise_PageInfo
 */
@interface GTLRAndroidEnterprise_PageInfo : GTLRObject

/**
 *  resultPerPage
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *resultPerPage;

/**
 *  startIndex
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *startIndex;

/**
 *  totalResults
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *totalResults;

@end


/**
 *  A permission represents some extra capability, to be granted to an Android
 *  app, which requires explicit consent. An enterprise admin must consent to
 *  these permissions on behalf of their users before an entitlement for the app
 *  can be created.
 *  The permissions collection is read-only. The information provided for each
 *  permission (localized name and description) is intended to be used in the
 *  EMM user interface when obtaining consent from the enterprise.
 */
@interface GTLRAndroidEnterprise_Permission : GTLRObject

/**
 *  A longer description of the permissions giving more details of what it
 *  affects.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(copy, nullable) NSString *descriptionProperty;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#permission".
 */
@property(copy, nullable) NSString *kind;

/** The name of the permission. */
@property(copy, nullable) NSString *name;

/** An opaque string uniquely identifying the permission. */
@property(copy, nullable) NSString *permissionId;

@end


/**
 *  A product represents an app in the Google Play Store that is available to at
 *  least some users in the enterprise. (Some apps are restricted to a single
 *  enterprise, and no information about them is made available outside that
 *  enterprise.)
 *  The information provided for each product (localized name, icon, link to the
 *  full Google Play details page) is intended to allow a basic representation
 *  of the product within an EMM user interface.
 */
@interface GTLRAndroidEnterprise_Product : GTLRObject

/**
 *  App versions currently available for this product. The returned list
 *  contains only public versions. Alpha and beta versions are not included.
 */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_AppVersion *> *appVersion;

/** The name of the author of the product (e.g. the app developer). */
@property(copy, nullable) NSString *authorName;

/** A link to the (consumer) Google Play details page for the product. */
@property(copy, nullable) NSString *detailsUrl;

/**
 *  How and to whom the package is made available. The value publicGoogleHosted
 *  means that the package is available through the Play Store and not
 *  restricted to a specific enterprise. The value privateGoogleHosted means
 *  that the package is a private app (restricted to an enterprise) but hosted
 *  by Google. The value privateSelfHosted means that the package is a private
 *  app (restricted to an enterprise) and is privately hosted.
 */
@property(copy, nullable) NSString *distributionChannel;

/**
 *  A link to an image that can be used as an icon for the product. This image
 *  is suitable for use at up to 512px x 512px.
 */
@property(copy, nullable) NSString *iconUrl;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#product".
 */
@property(copy, nullable) NSString *kind;

/**
 *  A string of the form app:<package name>. For example,
 *  app:com.google.android.gm represents the Gmail app.
 */
@property(copy, nullable) NSString *productId;

/** Whether this product is free, free with in-app purchases, or paid. */
@property(copy, nullable) NSString *productPricing;

/**
 *  Whether this app can only be installed on devices using the Android for Work
 *  container app.
 *
 *  Uses NSNumber of boolValue.
 */
@property(strong, nullable) NSNumber *requiresContainerApp;

/**
 *  A link to a smaller image that can be used as an icon for the product. This
 *  image is suitable for use at up to 128px x 128px.
 */
@property(copy, nullable) NSString *smallIconUrl;

/** The name of the product. */
@property(copy, nullable) NSString *title;

/**
 *  A link to the Google Play for Work details page for the product, for use by
 *  an Enterprise administrator.
 */
@property(copy, nullable) NSString *workDetailsUrl;

@end


/**
 *  A product permissions resource represents the set of permissions required by
 *  a specific app and whether or not they have been accepted by an enterprise
 *  admin.
 *  The API can be used to read the set of permissions, and also to update the
 *  set to indicate that permissions have been accepted.
 */
@interface GTLRAndroidEnterprise_ProductPermission : GTLRObject

/** An opaque string uniquely identifying the permission. */
@property(copy, nullable) NSString *permissionId;

/** Whether the permission has been accepted or not. */
@property(copy, nullable) NSString *state;

@end


/**
 *  Information about the permissions required by a specific app and whether
 *  they have been accepted by the enterprise.
 */
@interface GTLRAndroidEnterprise_ProductPermissions : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#productPermissions".
 */
@property(copy, nullable) NSString *kind;

/** The permissions required by the app. */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_ProductPermission *> *permission;

/**
 *  The ID of the app that the permissions relate to, e.g.
 *  "app:com.google.android.gm".
 */
@property(copy, nullable) NSString *productId;

@end


/**
 *  GTLRAndroidEnterprise_ProductsApproveRequest
 */
@interface GTLRAndroidEnterprise_ProductsApproveRequest : GTLRObject

/**
 *  The approval URL that was shown to the user. Only the permissions shown to
 *  the user with that URL will be accepted, which may not be the product's
 *  entire set of permissions. For example, the URL may only display new
 *  permissions from an update after the product was approved, or not include
 *  new permissions if the product was updated since the URL was generated.
 */
@property(strong, nullable) GTLRAndroidEnterprise_ApprovalUrlInfo *approvalUrlInfo;

@end


/**
 *  A set of products.
 */
@interface GTLRAndroidEnterprise_ProductSet : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#productSet".
 */
@property(copy, nullable) NSString *kind;

/** The list of product IDs making up the set of products. */
@property(strong, nullable) NSArray<NSString *> *productId;

@end


/**
 *  GTLRAndroidEnterprise_ProductsGenerateApprovalUrlResponse
 */
@interface GTLRAndroidEnterprise_ProductsGenerateApprovalUrlResponse : GTLRObject

/**
 *  A URL that can be rendered in an iframe to display the permissions (if any)
 *  of a product. This URL can be used to approve the product only once and only
 *  within 24 hours of being generated, using the Products.approve call. If the
 *  product is currently unapproved and has no permissions, this URL will point
 *  to an empty page. If the product is currently approved, a URL will only be
 *  generated if that product has added permissions since it was last approved,
 *  and the URL will only display those new permissions that have not yet been
 *  accepted.
 */
@property(copy, nullable) NSString *url;

@end


/**
 *  The matching products.
 */
@interface GTLRAndroidEnterprise_ProductsListResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#productsListResponse".
 */
@property(copy, nullable) NSString *kind;

/** General pagination information. */
@property(strong, nullable) GTLRAndroidEnterprise_PageInfo *pageInfo;

/**
 *  Information about a product (e.g. an app) in the Google Play Store, for
 *  display to an enterprise admin.
 */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_Product *> *product;

/** Pagination information for token pagination. */
@property(strong, nullable) GTLRAndroidEnterprise_TokenPagination *tokenPagination;

@end


/**
 *  Definition of a Google Play for Work store cluster, a list of products
 *  displayed as part of a store page.
 */
@interface GTLRAndroidEnterprise_StoreCluster : GTLRObject

/**
 *  Unique ID of this cluster. Assigned by the server. Immutable once assigned.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(copy, nullable) NSString *identifier;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#storeCluster".
 */
@property(copy, nullable) NSString *kind;

/**
 *  Ordered list of localized strings giving the name of this page. The text
 *  displayed is the one that best matches the user locale, or the first entry
 *  if there is no good match. There needs to be at least one entry.
 */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_LocalizedText *> *name;

/**
 *  String (US-ASCII only) used to determine order of this cluster within the
 *  parent page's elements. Page elements are sorted in lexicographic order of
 *  this field. Duplicated values are allowed, but ordering between elements
 *  with duplicate order is undefined.
 *  The value of this field is never visible to a user, it is used solely for
 *  the purpose of defining an ordering. Maximum length is 256 characters.
 */
@property(copy, nullable) NSString *orderInPage;

/**
 *  List of products in the order they are displayed in the cluster. There
 *  should not be duplicates within a cluster.
 */
@property(strong, nullable) NSArray<NSString *> *productId;

@end


/**
 *  General setting for the Google Play for Work store layout, currently only
 *  specifying the page to display the first time the store is opened.
 */
@interface GTLRAndroidEnterprise_StoreLayout : GTLRObject

/**
 *  The ID of the store page to be used as the homepage. The homepage will be
 *  used as the first page shown in the Google Play for Work store.
 *  If there is no homepage set, an empty store is shown. The homepage can be
 *  unset (by not specifying it) to empty the store.
 *  If there exists at least one page, this field must be set to the ID of a
 *  valid page.
 */
@property(copy, nullable) NSString *homepageId;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#storeLayout".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  The store page resources for the enterprise.
 */
@interface GTLRAndroidEnterprise_StoreLayoutClustersListResponse : GTLRObject

/** A store cluster of an enterprise. */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_StoreCluster *> *cluster;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#storeLayoutClustersListResponse".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  The store page resources for the enterprise.
 */
@interface GTLRAndroidEnterprise_StoreLayoutPagesListResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#storeLayoutPagesListResponse".
 */
@property(copy, nullable) NSString *kind;

/** A store page of an enterprise. */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_StorePage *> *page;

@end


/**
 *  Definition of a Google Play for Work store page, made of a localized name
 *  and links to other pages. A page also contains clusters defined as a
 *  subcollection.
 */
@interface GTLRAndroidEnterprise_StorePage : GTLRObject

/**
 *  Unique ID of this page. Assigned by the server. Immutable once assigned.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(copy, nullable) NSString *identifier;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#storePage".
 */
@property(copy, nullable) NSString *kind;

/**
 *  Ordered list of pages a user should be able to reach from this page. The
 *  pages must exist, must not be this page, and once a link is created the page
 *  linked to cannot be deleted until all links to it are removed. It is
 *  recommended that the basic pages are created first, before adding the links
 *  between pages.
 *  No attempt is made to verify that all pages are reachable from the homepage.
 */
@property(strong, nullable) NSArray<NSString *> *link;

/**
 *  Ordered list of localized strings giving the name of this page. The text
 *  displayed is the one that best matches the user locale, or the first entry
 *  if there is no good match. There needs to be at least one entry.
 */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_LocalizedText *> *name;

@end


/**
 *  GTLRAndroidEnterprise_TokenPagination
 */
@interface GTLRAndroidEnterprise_TokenPagination : GTLRObject

@property(copy, nullable) NSString *nextPageToken;
@property(copy, nullable) NSString *previousPageToken;

@end


/**
 *  A user resource represents an individual user within the enterprise's
 *  domain.
 *  Note that each user is associated with a Google account based on the user's
 *  corporate email address (which must be in one of the enterprise's domains).
 *  As part of installing the EMM's DPC app to manage a device the Google
 *  account must be provisioned to the device, and so the user resource must be
 *  created before that. This can be done using the Google Admin SDK Directory
 *  API.
 *  The ID for a user is an opaque string. It can be retrieved using the list
 *  method queried by the user's primary email address.
 */
@interface GTLRAndroidEnterprise_User : GTLRObject

/**
 *  The unique ID for the user.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(copy, nullable) NSString *identifier;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#user".
 */
@property(copy, nullable) NSString *kind;

/** The user's primary email address, e.g. "jsmith\@example.com". */
@property(copy, nullable) NSString *primaryEmail;

@end


/**
 *  The matching user resources.
 */
@interface GTLRAndroidEnterprise_UsersListResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#usersListResponse".
 */
@property(copy, nullable) NSString *kind;

/** A user of an enterprise. */
@property(strong, nullable) NSArray<GTLRAndroidEnterprise_User *> *user;

@end


/**
 *  A UserToken is used by a user when setting up a managed device or profile
 *  with their work account on a device. When the user enters their email
 *  address and token (activation code) the appropriate EMM app can be
 *  automatically downloaded.
 */
@interface GTLRAndroidEnterprise_UserToken : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidenterprise#userToken".
 */
@property(copy, nullable) NSString *kind;

/**
 *  The token (activation code) to be entered by the user. This consists of a
 *  sequence of decimal digits. Note that the leading digit may be 0.
 */
@property(copy, nullable) NSString *token;

/** The unique ID for the user. */
@property(copy, nullable) NSString *userId;

@end

NS_ASSUME_NONNULL_END
