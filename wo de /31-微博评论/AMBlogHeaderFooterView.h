//
//  AMBlogHeaderFooterView.h
//  31-微博评论
//
//  Created by teacher on 16/1/29.
//  Copyright © 2016年 teacher. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AMBlogModel.h"

@interface AMBlogHeaderFooterView : UITableViewHeaderFooterView

+ (AMBlogHeaderFooterView *) headerFooterViewWithTableView:(UITableView *) tableView;


@property (nonatomic, strong) AMBlogModel * blogModel;

+ (CGFloat) headerheight;

@end



