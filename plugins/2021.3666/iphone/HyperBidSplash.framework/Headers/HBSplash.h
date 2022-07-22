//
//  HBSplash.h
//  HyperBidSplash
//
//  Created by Leo on 2018/12/20.
//  Copyright © 2018 Leo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <HyperBidSDK/HyperBidSDK.h>

@class HBSplashCustomEvent;
@interface HBSplash : NSObject<HBAd>
-(instancetype) initWithPriority:(NSInteger) priority placementModel:(HBPlacementModel*)placementModel requestID:(NSString*)requestID assets:(NSDictionary*)assets unitGroup:(HBUnitGroupModel*)unitGroup finalWaterfall:(HBWaterfall *)finalWaterfall;
@property(nonatomic) NSInteger showTimes;
/**
 Priority is calculate by the index of the unit group in the placement's unit group list; zero is the highest
 */
@property(nonatomic, readonly) NSInteger priority;
@property(nonatomic, readonly) NSInteger priorityLevel;
@property(nonatomic, readonly) HBPlacementModel *placementModel;
@property(nonatomic) NSString *requestID;
@property(nonatomic, readonly) NSString *originalRequestID;
@property(nonatomic, readonly) NSDate *expireDate;
@property(nonatomic, readonly) NSDate *cacheDate;
@property(nonatomic, readonly) HBUnitGroupModel *unitGroup;
@property(nonatomic) NSMutableArray<NSDictionary*> *unitGroupInfos;
@property(nonatomic, readonly) NSString *unitID;
@property(nonatomic, readonly) id customObject;
@property(nonatomic, readonly) HBSplashCustomEvent *customEvent;
@property(nonatomic, readonly) NSString *price;
@property(nonatomic, readonly) NSString *bidId;
@property(nonatomic, readonly) NSString *tpBidId;
@property(nonatomic, readonly, weak) HBWaterfall *finalWaterfall;
@property(nonatomic, readonly) NSInteger autoReqType;
@property(nonatomic) BOOL adReportClicked;

//to do
// for ad which loads without a placement setting
@property(nonatomic) Class adapterClass;

@end
