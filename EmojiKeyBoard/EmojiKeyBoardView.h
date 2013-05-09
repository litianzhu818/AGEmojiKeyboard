//
//  EmojiKeyBoardView.h
//  EmojiKeyBoard
//
//  Created by Ayush on 09/05/13.
//  Copyright (c) 2013 Ayush. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DDPageControl.h"

@interface EmojiKeyBoardView : UIView

@property (nonatomic, strong) UISegmentedControl *segmentsBar;
@property (nonatomic, strong) DDPageControl *pageControl;
@property (nonatomic, strong) UIScrollView *scrollView;

@end
