/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import "IGListAdapterDataSource.h"
#import "IGListAdapterMoveDelegate.h"
#import "IGListSectionController.h"

#import "IGListTestCase.h"
#import "IGTestObject.h"

@interface IGListTestAdapterStackedReorderingDataSource : NSObject <IGListTestCaseDataSource, IGListAdapterMoveDelegate>

// array of numbers which is then passed to -[IGTestReorderableSection setItems:]
@property (nonatomic, strong) NSArray<IGTestObject *> *objects;

@property (nonatomic, strong) UIView *backgroundView;

@property (nonatomic, strong, readonly) NSArray<IGListSectionController *> *sectionControllers;

- (instancetype)initWithSectionControllers:(NSArray<IGListSectionController *> *)sections;

@end

