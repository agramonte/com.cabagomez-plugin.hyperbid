//
//  HeliumError.h
//  HeliumSdk
//
//  Created by Geoff Heeren on 11/1/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM( NSUInteger, HeliumErrorCode ) {
    HeliumErrorCode_NoAdFound,
    HeliumErrorCode_NoBid,
    HeliumErrorCode_NoNetwork,
    HeliumErrorCode_ServerError,
    HeliumErrorCode_PartnerError,
    HeliumErrorCode_StartUpError,
    HeliumErrorCode_Unknown
};
@interface HeliumError : NSObject
@property (assign,readonly) HeliumErrorCode errorCode;
@property (nonatomic,readonly) NSString *errorDescription;
@end

NS_ASSUME_NONNULL_END
