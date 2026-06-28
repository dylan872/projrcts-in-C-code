from transformers import pipeline

classifier=pipeline("sentiment-analysis")
print(classifier("I really love this app!"))