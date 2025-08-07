📝 Solution Documentation Template
💡 Tip: Copy this template to each problem folder as documentation.md and fill in your details!

Problem Understanding
What the problem is asking: [Explain in your own words]
1 The problem was to create a scientific calculator without using the prebuilt in library for the advanced functions.

Key concepts involved: [List the main ideas/algorithms needed]
2 Some of the concepts involved were conditional constructs, nested if else, mathematical understanding of the functions, the iterative feature of programs and many more.

My approach: [High-level strategy you chose]
3 The basic DMAS and the square roots and powers, i used the normal inbuilt function and library, even for power/indices as it wasn't specified to not use it(how ever for decimal index i made a separate one myself). Solely claiming that the strategy and idea were mine without ANY information sourcing would be a lie but most of the algorithms made are by me with slight inspirations from here and there.
The one I most enjoyed making was the natural logarithm function. For the exponent part i decided to split the e^x, the x into characteristic and mantissa, and used the inbuilt library to compute the first part and the second one, i used the Taylor Series to compute with about 5-6 terms to minimize the errors. But for the logarithms, the same part could not be used as splitting the function into an algebraic sum as alas! it is the multiplication which could be segregated and not the summation. So I thought of getting the actual mathematical algorithm, tired thinking of the number of conditions i would have to inculcate in my code I stumbled upon an interesting thing. I did not read the mathematical approach and skipped to the bottom of the file where an interesting way to compute natural logs on paper was given. it was that for ln (50) it could be made as ln (49) + ln (50/49) or 7ln7 + ln (1+1/49) the one plus 1/49 stayed with me as that is an ingenious method to use. So taking inspiration from it i made a loop which would (for values > 2 is the interesting part) see if the value is greater than 2 and divide it by two until it is in between 1 and 2 and also simultaneously adding 0.693 to the answer every time the loop executes.
So it becomes n*ln2 + ln 1 + x(which gets computed from the mclauren series).
About the sines i was thinking of making a way, thinking for angle lesser than 15 degree direct series between 15 to 30 break it into sin (a+b) and give sin 15 already but then i read somewhere that the mclauren series is pretty accurate and such cool stuff isn't needed, so for the sine cosine tangent i used it. I decided to do the same for arcsine etc etc even if they were less accurate as i am not much good with it . The decimal index part i did it again by using the same exponent function code and tweaking the part x as xloga where a is the base and x is the e^x. I made functions and invoked it in the main prg. I really thank the seniors for this.

Conceptual Learning
So many that i cant chose one, but the best one is, I now know c++, atleast in a beginner stage.

[Concept Name]: [What it is and why it's useful] The problem solving for ln, the practice of problem solving i got and it would be useful, ig i dont need to explain why
[Another Concept]: [Brief explanation and application]
How I Applied These Concepts 
[Explain how you used the concepts to solve the problem]

Real-World Connections
[Where might you see this problem or similar concepts in real applications?]
maybe... tomorrow we could do the same task with lesser lines of code, by developing better algorithms, "lesser resources".

I really had fun!
Regards;
Junior