from PIL import Image
import matplotlib.pyplot as plt
Thala=r"C:\Users\arpit\Downloads\c7737b60cef87757acb7bb24b7247cdf.jpg"
image=Image.open(Thala)

plt.imshow(image)
plt.axis('off')
plt.show()
