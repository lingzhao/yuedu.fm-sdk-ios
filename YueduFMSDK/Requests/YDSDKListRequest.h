//
//  YDSDKListRequest.h
//  YueduFMSDK
//
//  Created by StarNet on 9/18/15.
//  Copyright (c) 2015 StarNet. All rights reserved.
//

#import <YueduFMSDK/YueduFMSDK.h>

@interface YDSDKListRequest : YDSDKRequest

@property (nonatomic, readonly) NSArray* modelArray;

// 子类继承
- (Class)modelClass;


@end
