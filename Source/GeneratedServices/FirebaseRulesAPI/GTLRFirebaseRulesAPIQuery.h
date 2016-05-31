// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Rules API (firebaserules/v1)
// Description:
//   Creates and manages rules that determine when a Firebase Rules-enabled
//   service should permit a request.
// Documentation:
//   https://firebase.google.com/docs/storage/security/start

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirebaseRulesAPI_Release;
@class GTLRFirebaseRulesAPI_Ruleset;
@class GTLRFirebaseRulesAPI_TestRulesetRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Firebase Rules API query classes.
 */
@interface GTLRFirebaseRulesAPIQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(copy, nullable) NSString *fields;

@end

/**
 *  Create a `Release`.
 *  Release names should reflect the developer's deployment practices. For
 *  example, the release name may include the environment name, application
 *  name, application version, or any other name meaningful to the developer.
 *  Once a `Release` refers to a `Ruleset`, the rules can be enforced by
 *  Firebase Rules-enabled services.
 *  More than one `Release` may be 'live' concurrently. Consider the following
 *  three `Release` names for `projects/foo` and the `Ruleset` to which they
 *  refer.
 *  Release Name | Ruleset Name
 *  --------------------------------|-------------
 *  projects/foo/releases/prod | projects/foo/rulesets/uuid123
 *  projects/foo/releases/prod/beta | projects/foo/rulesets/uuid123
 *  projects/foo/releases/prod/v23 | projects/foo/rulesets/uuid456
 *  The table reflects the `Ruleset` rollout in progress. The `prod` and
 *  `prod/beta` releases refer to the same `Ruleset`. However, `prod/v23`
 *  refers to a new `Ruleset`. The `Ruleset` reference for a `Release` may be
 *  updated using the UpdateRelease method, and the custom `Release` name
 *  may be referenced by specifying the `X-Firebase-Rules-Release-Name` header.
 *
 *  Method: firebaserules.projects.releases.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesAPICloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebase
 */
@interface GTLRFirebaseRulesAPIQuery_ProjectsReleasesCreate : GTLRFirebaseRulesAPIQuery
// Previous library name was
//   +[GTLQueryFirebaseRulesAPI queryForProjectsReleasesCreateWithObject:name:]

/**
 *  Resource name for the project which owns this `Release`.
 *  Format: `projects/{project_id}`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRulesAPI_Release.
 *
 *  Create a `Release`.
 *  Release names should reflect the developer's deployment practices. For
 *  example, the release name may include the environment name, application
 *  name, application version, or any other name meaningful to the developer.
 *  Once a `Release` refers to a `Ruleset`, the rules can be enforced by
 *  Firebase Rules-enabled services.
 *  More than one `Release` may be 'live' concurrently. Consider the following
 *  three `Release` names for `projects/foo` and the `Ruleset` to which they
 *  refer.
 *  Release Name | Ruleset Name
 *  --------------------------------|-------------
 *  projects/foo/releases/prod | projects/foo/rulesets/uuid123
 *  projects/foo/releases/prod/beta | projects/foo/rulesets/uuid123
 *  projects/foo/releases/prod/v23 | projects/foo/rulesets/uuid456
 *  The table reflects the `Ruleset` rollout in progress. The `prod` and
 *  `prod/beta` releases refer to the same `Ruleset`. However, `prod/v23`
 *  refers to a new `Ruleset`. The `Ruleset` reference for a `Release` may be
 *  updated using the UpdateRelease method, and the custom `Release` name
 *  may be referenced by specifying the `X-Firebase-Rules-Release-Name` header.
 *
 *  @param object The @c GTLRFirebaseRulesAPI_Release to include in the query.
 *  @param name Resource name for the project which owns this `Release`.
 *    Format: `projects/{project_id}`
 *
 *  @returns GTLRFirebaseRulesAPIQuery_ProjectsReleasesCreate
 */
+ (instancetype)queryWithObject:(GTLRFirebaseRulesAPI_Release *)object
                           name:(NSString *)name;

@end

/**
 *  Delete a `Release` by resource name.
 *
 *  Method: firebaserules.projects.releases.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesAPICloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebase
 */
@interface GTLRFirebaseRulesAPIQuery_ProjectsReleasesDelete : GTLRFirebaseRulesAPIQuery
// Previous library name was
//   +[GTLQueryFirebaseRulesAPI queryForProjectsReleasesDeleteWithname:]

/**
 *  Resource name for the `Release` to delete.
 *  Format: `projects/{project_id}/releases/{release_id}`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRulesAPI_Empty.
 *
 *  Delete a `Release` by resource name.
 *
 *  @param name Resource name for the `Release` to delete.
 *    Format: `projects/{project_id}/releases/{release_id}`
 *
 *  @returns GTLRFirebaseRulesAPIQuery_ProjectsReleasesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get a `Release` by name.
 *
 *  Method: firebaserules.projects.releases.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesAPICloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebase
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebaseReadonly
 */
@interface GTLRFirebaseRulesAPIQuery_ProjectsReleasesGet : GTLRFirebaseRulesAPIQuery
// Previous library name was
//   +[GTLQueryFirebaseRulesAPI queryForProjectsReleasesGetWithname:]

/**
 *  Resource name of the `Release`.
 *  Format: `projects/{project_id}/releases/{release_id}`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRulesAPI_Release.
 *
 *  Get a `Release` by name.
 *
 *  @param name Resource name of the `Release`.
 *    Format: `projects/{project_id}/releases/{release_id}`
 *
 *  @returns GTLRFirebaseRulesAPIQuery_ProjectsReleasesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List the `Release` values for a project. This list may optionally be
 *  filtered by `Release` name or `Ruleset` id or both.
 *
 *  Method: firebaserules.projects.releases.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesAPICloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebase
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebaseReadonly
 */
@interface GTLRFirebaseRulesAPIQuery_ProjectsReleasesList : GTLRFirebaseRulesAPIQuery
// Previous library name was
//   +[GTLQueryFirebaseRulesAPI queryForProjectsReleasesListWithname:]

/**
 *  `Release` filter. The list method supports filters with restrictions on the
 *  `Release` `name` and also on the `Ruleset` `ruleset_name`.
 *  Example 1) A filter of 'name=prod*' might return `Release`s with names
 *  within 'projects/foo' prefixed with 'prod':
 *  Name | Ruleset Name
 *  ------------------------------|-------------
 *  projects/foo/releases/prod | projects/foo/rulesets/uuid1234
 *  projects/foo/releases/prod/v1 | projects/foo/rulesets/uuid1234
 *  projects/foo/releases/prod/v2 | projects/foo/rulesets/uuid8888
 *  Example 2) A filter of `name=prod* ruleset_name=uuid1234` would return only
 *  `Release` instances for 'projects/foo' with names prefixed with 'prod'
 *  referring to the same `Ruleset` name of 'uuid1234':
 *  Name | Ruleset Name
 *  ------------------------------|-------------
 *  projects/foo/releases/prod | projects/foo/rulesets/1234
 *  projects/foo/releases/prod/v1 | projects/foo/rulesets/1234
 *  In the examples, the filter parameters refer to the search filters for
 *  release and ruleset names are relative to the project releases and rulesets
 *  collections. Fully qualified prefixed may also be used. e.g.
 *  `name=projects/foo/releases/prod* ruleset_name=projects/foo/rulesets/uuid1`
 */
@property(copy, nullable) NSString *filter;

/**
 *  Resource name for the project.
 *  Format: `projects/{project_id}`
 */
@property(copy, nullable) NSString *name;

/**
 *  Page size to load. Maximum of 100. Defaults to 10.
 *  Note: `page_size` is just a hint and the service may choose to load less
 *  than `page_size` due to the size of the output. To traverse all of the
 *  releases, caller should iterate until the `page_token` is empty.
 */
@property(assign) NSInteger pageSize;

/** Next page token for the next batch of `Release` instances. */
@property(copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRFirebaseRulesAPI_ListReleasesResponse.
 *
 *  List the `Release` values for a project. This list may optionally be
 *  filtered by `Release` name or `Ruleset` id or both.
 *
 *  @param name Resource name for the project.
 *    Format: `projects/{project_id}`
 *
 *  @returns GTLRFirebaseRulesAPIQuery_ProjectsReleasesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Update a `Release`.
 *  Only updates to the `ruleset_name` field will be honored. `Release` rename
 *  is not supported. To create a `Release` use the CreateRelease method
 *  instead.
 *
 *  Method: firebaserules.projects.releases.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesAPICloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebase
 */
@interface GTLRFirebaseRulesAPIQuery_ProjectsReleasesUpdate : GTLRFirebaseRulesAPIQuery
// Previous library name was
//   +[GTLQueryFirebaseRulesAPI queryForProjectsReleasesUpdateWithObject:name:]

/**
 *  Resource name for the `Release`.
 *  `Release` names may be structured `app1/prod/v2` or flat `app1_prod_v2`
 *  which affords developers a great deal of flexibility in mapping the name
 *  to the style that best fits their existing development practices. For
 *  example, a name could refer to an environment, an app, a version, or some
 *  combination of three.
 *  In the table below, for the project name `projects/foo`, the following
 *  relative release paths show how flat and structured names might be chosen
 *  to match a desired development / deployment strategy.
 *  Use Case | Flat Name | Structured Name
 *  -------------|---------------------|----------------
 *  Environments | releases/qa | releases/qa
 *  Apps | releases/app1_qa | releases/app1/qa
 *  Versions | releases/app1_v2_qa | releases/app1/v2/qa
 *  The delimiter between the release name path elements can be almost anything
 *  and it should work equally well with the release name list filter, but in
 *  many ways the structured paths provide a clearer picture of the
 *  relationship between `Release` instances.
 *  Format: `projects/{project_id}/releases/{release_id}`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRulesAPI_Release.
 *
 *  Update a `Release`.
 *  Only updates to the `ruleset_name` field will be honored. `Release` rename
 *  is not supported. To create a `Release` use the CreateRelease method
 *  instead.
 *
 *  @param object The @c GTLRFirebaseRulesAPI_Release to include in the query.
 *  @param name Resource name for the `Release`.
 *    `Release` names may be structured `app1/prod/v2` or flat `app1_prod_v2`
 *    which affords developers a great deal of flexibility in mapping the name
 *    to the style that best fits their existing development practices. For
 *    example, a name could refer to an environment, an app, a version, or some
 *    combination of three.
 *    In the table below, for the project name `projects/foo`, the following
 *    relative release paths show how flat and structured names might be chosen
 *    to match a desired development / deployment strategy.
 *    Use Case | Flat Name | Structured Name
 *    -------------|---------------------|----------------
 *    Environments | releases/qa | releases/qa
 *    Apps | releases/app1_qa | releases/app1/qa
 *    Versions | releases/app1_v2_qa | releases/app1/v2/qa
 *    The delimiter between the release name path elements can be almost
 *    anything
 *    and it should work equally well with the release name list filter, but in
 *    many ways the structured paths provide a clearer picture of the
 *    relationship between `Release` instances.
 *    Format: `projects/{project_id}/releases/{release_id}`
 *
 *  @returns GTLRFirebaseRulesAPIQuery_ProjectsReleasesUpdate
 */
+ (instancetype)queryWithObject:(GTLRFirebaseRulesAPI_Release *)object
                           name:(NSString *)name;

@end

/**
 *  Create a `Ruleset` from `Source`.
 *  The `Ruleset` is given a unique generated name which is returned to the
 *  caller. `Source` containing syntactic or semantics errors will result in an
 *  error response indicating the first error encountered. For a detailed view
 *  of `Source` issues, use TestRuleset.
 *
 *  Method: firebaserules.projects.rulesets.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesAPICloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebase
 */
@interface GTLRFirebaseRulesAPIQuery_ProjectsRulesetsCreate : GTLRFirebaseRulesAPIQuery
// Previous library name was
//   +[GTLQueryFirebaseRulesAPI queryForProjectsRulesetsCreateWithObject:name:]

/**
 *  Resource name for Project which owns this `Ruleset`.
 *  Format: `projects/{project_id}`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRulesAPI_Ruleset.
 *
 *  Create a `Ruleset` from `Source`.
 *  The `Ruleset` is given a unique generated name which is returned to the
 *  caller. `Source` containing syntactic or semantics errors will result in an
 *  error response indicating the first error encountered. For a detailed view
 *  of `Source` issues, use TestRuleset.
 *
 *  @param object The @c GTLRFirebaseRulesAPI_Ruleset to include in the query.
 *  @param name Resource name for Project which owns this `Ruleset`.
 *    Format: `projects/{project_id}`
 *
 *  @returns GTLRFirebaseRulesAPIQuery_ProjectsRulesetsCreate
 */
+ (instancetype)queryWithObject:(GTLRFirebaseRulesAPI_Ruleset *)object
                           name:(NSString *)name;

@end

/**
 *  Delete a `Ruleset` by resource name.
 *  If the `Ruleset` is referenced by a `Release` the operation will fail.
 *
 *  Method: firebaserules.projects.rulesets.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesAPICloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebase
 */
@interface GTLRFirebaseRulesAPIQuery_ProjectsRulesetsDelete : GTLRFirebaseRulesAPIQuery
// Previous library name was
//   +[GTLQueryFirebaseRulesAPI queryForProjectsRulesetsDeleteWithname:]

/**
 *  Resource name for the ruleset to delete.
 *  Format: `projects/{project_id}/rulesets/{ruleset_id}`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRulesAPI_Empty.
 *
 *  Delete a `Ruleset` by resource name.
 *  If the `Ruleset` is referenced by a `Release` the operation will fail.
 *
 *  @param name Resource name for the ruleset to delete.
 *    Format: `projects/{project_id}/rulesets/{ruleset_id}`
 *
 *  @returns GTLRFirebaseRulesAPIQuery_ProjectsRulesetsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get a `Ruleset` by name including the full `Source` contents.
 *
 *  Method: firebaserules.projects.rulesets.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesAPICloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebase
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebaseReadonly
 */
@interface GTLRFirebaseRulesAPIQuery_ProjectsRulesetsGet : GTLRFirebaseRulesAPIQuery
// Previous library name was
//   +[GTLQueryFirebaseRulesAPI queryForProjectsRulesetsGetWithname:]

/**
 *  Resource name for the ruleset to get.
 *  Format: `projects/{project_id}/rulesets/{ruleset_id}`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRulesAPI_Ruleset.
 *
 *  Get a `Ruleset` by name including the full `Source` contents.
 *
 *  @param name Resource name for the ruleset to get.
 *    Format: `projects/{project_id}/rulesets/{ruleset_id}`
 *
 *  @returns GTLRFirebaseRulesAPIQuery_ProjectsRulesetsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List `Ruleset` metadata only and optionally filter the results by Ruleset
 *  name.
 *  The full `Source` contents of a `Ruleset` may be retrieved with
 *  GetRuleset.
 *
 *  Method: firebaserules.projects.rulesets.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesAPICloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebase
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebaseReadonly
 */
@interface GTLRFirebaseRulesAPIQuery_ProjectsRulesetsList : GTLRFirebaseRulesAPIQuery
// Previous library name was
//   +[GTLQueryFirebaseRulesAPI queryForProjectsRulesetsListWithname:]

/**
 *  Resource name for the project.
 *  Format: `projects/{project_id}`
 */
@property(copy, nullable) NSString *name;

/**
 *  Page size to load. Maximum of 100. Defaults to 10.
 *  Note: `page_size` is just a hint and the service may choose to load less
 *  than `page_size` due to the size of the output. To traverse all of the
 *  releases, caller should iterate until the `page_token` is empty.
 */
@property(assign) NSInteger pageSize;

/** Next page token for loading the next batch of `Ruleset` instances. */
@property(copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRFirebaseRulesAPI_ListRulesetsResponse.
 *
 *  List `Ruleset` metadata only and optionally filter the results by Ruleset
 *  name.
 *  The full `Source` contents of a `Ruleset` may be retrieved with
 *  GetRuleset.
 *
 *  @param name Resource name for the project.
 *    Format: `projects/{project_id}`
 *
 *  @returns GTLRFirebaseRulesAPIQuery_ProjectsRulesetsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Test `Source` for syntactic and semantic correctness. Issues present in the
 *  rules, if any, will be returned to the caller with a description, severity,
 *  and source location.
 *  The test method will typically be executed with a developer provided
 *  `Source`, but if regression testing is desired, this method may be
 *  executed against a `Ruleset` resource name and the `Source` will be
 *  retrieved from the persisted `Ruleset`.
 *  The following is an example of `Source` that permits users to upload images
 *  to a bucket bearing their user id and matching the correct metadata:
 *  _*Example*_
 *  // Users are allowed to subscribe and unsubscribe to the blog.
 *  service firebase.storage {
 *  match /users/{userId}/images/{imageName} {
 *  allow write: if userId == request.userId
 *  && (imageName.endsWith('.png') || imageName.endsWith('.jpg'))
 *  && resource.mimeType.startsWith('image/')
 *  }
 *  }
 *
 *  Method: firebaserules.projects.test
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseRulesAPICloudPlatform
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebase
 *    @c kGTLRAuthScopeFirebaseRulesAPIFirebaseReadonly
 */
@interface GTLRFirebaseRulesAPIQuery_ProjectsTest : GTLRFirebaseRulesAPIQuery
// Previous library name was
//   +[GTLQueryFirebaseRulesAPI queryForProjectsTestWithObject:name:]

/**
 *  Name of the project.
 *  Format: `projects/{project_id}`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseRulesAPI_TestRulesetResponse.
 *
 *  Test `Source` for syntactic and semantic correctness. Issues present in the
 *  rules, if any, will be returned to the caller with a description, severity,
 *  and source location.
 *  The test method will typically be executed with a developer provided
 *  `Source`, but if regression testing is desired, this method may be
 *  executed against a `Ruleset` resource name and the `Source` will be
 *  retrieved from the persisted `Ruleset`.
 *  The following is an example of `Source` that permits users to upload images
 *  to a bucket bearing their user id and matching the correct metadata:
 *  _*Example*_
 *  // Users are allowed to subscribe and unsubscribe to the blog.
 *  service firebase.storage {
 *  match /users/{userId}/images/{imageName} {
 *  allow write: if userId == request.userId
 *  && (imageName.endsWith('.png') || imageName.endsWith('.jpg'))
 *  && resource.mimeType.startsWith('image/')
 *  }
 *  }
 *
 *  @param object The @c GTLRFirebaseRulesAPI_TestRulesetRequest to include in
 *    the query.
 *  @param name Name of the project.
 *    Format: `projects/{project_id}`
 *
 *  @returns GTLRFirebaseRulesAPIQuery_ProjectsTest
 */
+ (instancetype)queryWithObject:(GTLRFirebaseRulesAPI_TestRulesetRequest *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
