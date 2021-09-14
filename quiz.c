
#include<stdio.h>
 #include<conio.h>
  int main()
   { 
   int score=0;
    int a,b,c,d,e,f,g,h,i,j;
	 printf("welcome to my game \n\n");
	  printf("there are 10 question\n\n");
	 	
 printf("if answer is correct to +3 point\n\n");
  printf("if answer is wrong to -1 points\n\n"); 
  printf("so let's start\n\n");
   printf("Q.1. who is no.1 YouTube individual\n creator\n");
    printf("[1] bb ki vines\t[2]mr.beast\n[3]pewdiepie\t[4]carryminati\n");
	 scanf("%d",&a);
	  if (a==3)
	   {
	    printf("that's correct\t");
		 score=score+3;
		  printf("your score is :%d\n\n",score);
		   }
		    else
			 {
			  printf("wrong answer\t");
			   score=score-1;
			    printf("your score is:%d\n\n",score);
				 }
				  printf("Q.2.who found computer\n");
				   printf("[1]newton\t[2]ohm\n[3]charls babage\t[4]edison\n"); scanf("%d",&b);
				    if (b==3)
					 { 
					 
					 printf("that's correct\t");
					  score=score+3;
					   printf("your score is:%d\n\n",score);
					    }
						 else { printf("wrong answer\t"); 
						 score=score-1; 
						 printf("your score is:%d\n\n",score);
						  }
						   printf("Q.3.which is not browser\n"); 
						   printf("[1]chrome\t[2]tor\n[3]fox\t[4]facebook\n"); 
						   scanf("%d",&c);
						    if(c==4)
							 
							 {
							  printf("that's correct\t"); 
							  score=score+3; 
							  printf("your score is:%d\n\n",score);
							   }
							    else { printf("wrong answer\t");
								 score=score-1;
								  printf("your score is:%d\n\n",score);
								   }
								    printf("Q.4.who funded DC current??\n"); 
									printf("[1]eainstin\t[2]edison\n[3]tesla\t[4]ohm\n"); 
									scanf("%d",&d); 
									if(d==3)
									 {
									  printf("that's correct\t"); 
									  score=score+3;
									   printf("your score is:%d\n\n",score);
									    }
										 else { printf("wrong answer\t");
										  score=score-1; 
										  printf("your score is:%d\n\n",score);
										   }
										    printf("Q.5.who is C.E.O of Google??\n");
											 printf("[1]Jeff Bezos\t[2]sunder pichai\n[3]biilgates\t[4]mark Zuckerberg\n");
											  scanf("%d",&e);
											   if(e==2)
											    { 
												printf("that's correct\t");
												 score=score+3;
												  printf("your score is:%d\n\n",score); 
												  } else
												   { 
												   printf("wrong answer\t");
												    score=score-1;
													 printf("your score is:%d\n\n",score);
													  } 
													  printf("Q.6.who crossed 100M subscriber first\n in the world\n");
													   printf("[1]pewdiepie\t[2]sony tv\n[3]zee music company\t[4]t series\n"); 
													   scanf("%d",&f); 
													   if (f==4)
													    { 
														printf("that's correct\t");
														 score=score+3;
														  printf("your score is:%d\n\n",score);
														   } 
														   else
														    { printf("wrong answer\t");
															 score=score-1; 
															 printf("your score is:%d\n\n",score);
															  }
															   printf("Q.7.monetisation ke liye kitne hours\n Watchtime chahiye??\n");
															   printf("[1]400\t[2]4000\n[3]100\t[4]1000\n");
															    scanf("%d",&g);
																 if(g==2)
																  { printf("that's correct\t");
																   score=score+3; 
																   printf("your score is:%d\n\n",score);
																    } 
																	else
																	 { printf("wrong answer\t");
																	  score=score-1;
																	   printf("your score is:%d\n\n",score);
																	    } 
																		printf("Q.8.who is the Indian no.1. individual youtuber\n");
																		 printf("[1]bb ki vines\t[2]carry minati\n[3]technical guruji\t[4]amit bhadana\n");
																		  scanf("%d",&h);
																		   if (h==4) 
																		   {
																		    printf("that's correct\t");
																			 score=score+3;
																			  printf("your score is:%d\n\n",score);
																			   } 
																			   else 
																			   {
																			   
																			   printf("wrong answer\t");
																			    score=score-1;
																				 printf("your score is:%d\n\n",score);
																				  } 
																				  printf("Q.9.2019 ka World Cup kisne jita tha??\n");
																				   printf("[1]newzland\t[2]india\n[3]austrilia\t[4]england\n");
																				    scanf("%d",&i);
																					 if(i==4)
																					  {
																					  
																					   printf("that's correct\t");
																					    score=score+3;
																						 printf("your score is:%d\n\n",score);
																						  }
																						   else 
																						   { 
																						   printf("wrong answer\t");
																						    score=score-1;
																							 printf("your score is:%d\n\n",score);
																							  } 
																							  printf("Q.10.what is my channel name??\n");
																							   printf("[1]wemakedagood\t[2]wizard\n[3]all genres\t[4]1M views\n");
																							    scanf("%d",&j);
																								 if(j==2) 
																								 { 
																								 printf("that's correct\t");
																								  score=score+3;
																								   printf("your score is:%d\n\n",score);
																								    } 
																									else
																									 {
																									  printf("wrong answer\t");
																									   score=score-1;
																									    printf("your score is:%d\n\n",score);
																										 }
																										  printf("thank you to play my game your total \nscore is:%d out of 30 \n\n",score);
																										    return 0; }
