//
//  mathData.h
//  math
//
//  Created by Mahmoud Abouelnasr on 4/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface mathData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id) initWithTitle:(NSString*) title rating:(float)rating;

@end
