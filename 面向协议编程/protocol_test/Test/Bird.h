//
//  Bird.h
//  Test
//
//  Created by apple on 16/10/12.
//  Copyright © 2016年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FlyProtocol.h"

@interface Bird : NSObject <FlyProtocol>


- (void)fly;

@end
