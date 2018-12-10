// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Drive Activity API (driveactivity/v2)
// Description:
//   Provides a historical view of activity in Google Drive.
// Documentation:
//   https://developers.google.com/drive/activity/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and add to the activity record of files in your
 *  Google Drive
 *
 *  Value "https://www.googleapis.com/auth/drive.activity"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeDriveActivityDriveActivity;
/**
 *  Authorization scope: View the activity record of files in your Google Drive
 *
 *  Value "https://www.googleapis.com/auth/drive.activity.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeDriveActivityDriveActivityReadonly;

// ----------------------------------------------------------------------------
//   GTLRDriveActivityService
//

/**
 *  Service for executing Drive Activity API queries.
 *
 *  Provides a historical view of activity in Google Drive.
 */
@interface GTLRDriveActivityService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRDriveActivityQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop