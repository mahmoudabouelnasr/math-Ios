//
//  mathData.m
//  math
//
//  Created by Mahmoud Abouelnasr on 4/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "mathData.h"

@implementation mathData

@synthesize title= _title;
@synthesize rating= _rating;

- (id)initWithTitle:(NSString *)title rating:(float)rating {
    if((self = [super init])) {
        self.title= title;
        self.rating = rating;
    }
    return self;
}

@end
