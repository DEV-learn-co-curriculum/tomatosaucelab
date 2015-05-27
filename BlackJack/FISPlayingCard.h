//
//  FISPlayingCard.h
//  BlackJack
//
//  Created by Al Tyus on 6/11/14.
//  Copyright (c) 2014 Flatiron School. All rights reserved.
//

@interface FISPlayingCard : NSObject

@property (strong, nonatomic) NSString *suit;
@property (strong, nonatomic) NSNumber *rank;
@property (strong, nonatomic) NSNumber *score; 

- (instancetype)initWithSuit:(NSString *)suit
                        rank:(NSNumber *)rank;

+ (NSArray *)rankStrings;
+ (NSArray *)validSuits;
+ (NSNumber *)maxRank;

@end
