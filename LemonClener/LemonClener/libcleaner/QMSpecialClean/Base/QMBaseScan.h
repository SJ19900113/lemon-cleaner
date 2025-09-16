//
//  QMBaseScan.h
//  LemonClener
//
//  Copyright © 2023 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QMCoreFunction/LMReferenceDefines.h>
#import "QMActionItem.h"
@protocol QMScanDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface QMBaseScan : NSObject

@property (weak) id<QMScanDelegate> delegate;

- (void)scanActionCompleted:(QMActionItem *)actionItem;

@end

NS_ASSUME_NONNULL_END
