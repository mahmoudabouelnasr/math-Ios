//
//  mathDoc.h
//  math
//
//  Created by Mahmoud Abouelnasr on 4/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class mathData;

@interface mathDoc : NSObject

@property (strong) mathData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage *) thumbImage fullImage:(UIImage *)fullImage;

@end
