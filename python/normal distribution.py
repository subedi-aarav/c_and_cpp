import numpy as np
import matplotlib.pyplot as plt

# Set the parameters for the normal distribution
mean = 0       # Mean of the distribution
std_dev = 1    # Standard deviation of the distribution
size = 10000   # Number of data points to generate

# Generate a dataset following a normal distribution
data = np.random.normal(mean, std_dev, size)

# Plot the histogram of the dataset to visualize the normal distribution
plt.hist(data, bins=50, density=True, alpha=0.9, color='b')

# Plot the probability density function (PDF) of the normal distribution
xmin, xmax = plt.xlim()
x = np.linspace(xmin, xmax, 100)
pdf = (1 / (std_dev * np.sqrt(2 * np.pi))) * np.exp(-(x - mean)**2 / (2 * std_dev**2))
plt.plot(x, pdf, 'r', linewidth=2)

# Set plot labels and title
plt.xlabel('Value')
plt.ylabel('Probability Density')
plt.title('Normal Distribution')

# Show the plot
plt.show()
