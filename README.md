# RespiScan-2.0
RespiScan 2.0 is a groundbreaking project aimed at enhancing lung cancer prediction through two innovative modes of analysis. Leveraging the power of Intel oneAPI, RespiScan 2.0 offers a comprehensive approach to early detection and prevention of lung cancer.

![RespiScan Logo](https://github.com/Abhinav00711/Abhinav00711.github.io/blob/main/files/RespiScan.png)

## INSPIRATION ![Inspiration](https://user-images.githubusercontent.com/72274851/218500470-ec078b99-0a50-4b06-a2df-c09e47ecc187.png)

Lung cancer is a pervasive and life-threatening disease affecting millions globally. Genetic mutations caused by factors like smoking and exposure to harmful substances are major contributors. Symptoms include breathlessness, coughing blood, chest pain, and weight loss. Diagnostic tests include X-rays, CT scans, MRI scans, PET scans, sputum cytology, and biopsy. Treatment involves surgery, chemotherapy, and radiation therapy based on cancer type and stage.

This project aims to heighten public awareness about lung cancer, its prevention, and early detection. As a leading global cause of cancer deaths, many remain unaware of risk factors and symptoms. By creating RespiScan, we educate individuals on reducing lung cancer risk by quitting smoking, avoiding passive smoke and carcinogens, and the significance of early diagnosis and treatment for better survival rates and quality of life.

## What It Does ![Functionality](https://user-images.githubusercontent.com/72274851/218503394-b52dfcc9-0620-4f44-94f5-46a09a5cc970.png)

RespiScan 2.0 is an innovative and comprehensive project aimed at lung cancer prediction and prevention through the integration of machine learning classification models and image analysis techniques. This advanced system provides users with accurate predictions regarding the likelihood of lung cancer based on a diverse set of variables, while also offering personalized prevention and cure recommendations.
Key Features:
- **Machine Learning Classification Models:** RespiScan 2.0 employs a powerful ensemble of 9 distinct machine learning classification models, implemented using the Scikit-learn library in Python. These models include Logistic Regression, Decision Tree, K-Nearest Neighbor, Gaussian Naive Bayes, Multinomial Naive Bayes, Support Vector Classifier, Random Forest, Multi-layer Perceptron, and Gradient Boosting Classifier. These algorithms work in synergy to predict the probability of lung cancer based on a comprehensive dataset.
- **Dataset and Variables:** The system utilizes a meticulously curated dataset containing various critical attributes including gender, age, smoking history, yellow fingers (a potential smoking-related indicator), anxiety levels, peer pressure exposure, history of chronic diseases, fatigue levels, allergies, wheezing frequency, alcohol consumption, coughing intensity, shortness of breath, swallowing difficulty, chest pain occurrences, and lung cancer status. These variables contribute to a holistic assessment of the user's potential risk.
- **CT Scan Image Analysis:** In addition to the machine learning models, RespiScan 2.0 employs cutting-edge image analysis techniques. Using the ResNet50 model, the system performs in-depth analysis of CT scan images to identify potential anomalies or signs of lung cancer. This mode of analysis adds a layer of precision and comprehensiveness to the overall prediction process.
- **Prevention and Cure Recommendations:** Upon completion of the prediction process, RespiScan 2.0 takes a holistic approach by providing users with personalized prevention and cure recommendations. These recommendations are based on the predicted likelihood of lung cancer, individual risk factors, and historical data. Users receive actionable steps and guidance to reduce their risk and promote lung health.
- **User-Friendly Interface:** RespiScan 2.0 features an intuitive and user-friendly interface that facilitates easy input of user data and CT scan images. The system presents prediction results and recommendations in a clear and understandable manner, enabling users to make informed decisions about their lung health.
RespiScan 2.0 represents a significant leap forward in lung cancer prediction and prevention. By seamlessly integrating machine learning models and image analysis, the system provides users with a comprehensive and personalized assessment of their lung cancer risk, empowering them to take proactive steps towards a healthier life.

## How I Built It ![Methodology](https://user-images.githubusercontent.com/72274851/218502434-f6e66043-0db0-4f85-b7f4-f33b2d33df1f.png)

The development of RespiScan 2.0 involves a carefully crafted methodology that integrates machine learning and image analysis techniques to predict lung cancer likelihood and provide tailored prevention and cure recommendations. The project follows a systematic approach to ensure accuracy, reliability, and user-friendliness.

**1. Data Collection and Preprocessing:**
Curate a diverse dataset containing relevant attributes such as gender, age, smoking history, lifestyle factors, symptoms, and lung cancer status.
Clean and preprocess the dataset to handle missing values, outliers, and ensure uniform data formatting.
Perform exploratory data analysis (EDA) to gain insights into data distributions, correlations, and potential biases.

**2. Feature Selection and Engineering:**
Identify key features that contribute significantly to lung cancer prediction using statistical analysis and domain expertise.
Create new features through feature engineering techniques to enhance model performance and capture complex relationships.

**3. Machine Learning Model Selection and Implementation:**
Choose a set of 9 machine learning classification algorithms including Logistic Regression, Decision Tree, K-Nearest Neighbor, Gaussian Naive Bayes, Multinomial Naive Bayes, Support Vector Classifier, Random Forest, Multi-layer Perceptron, and Gradient Boosting Classifier.
Split the dataset into training and testing sets for model training and evaluation.
Implement each algorithm using the Scikit-learn library and optimize hyperparameters through techniques like grid search or randomized search.

**4. CT Scan Image Analysis using ResNet50:**
Preprocess CT scan images to standardize dimensions, normalize pixel values, and enhance contrast.
Utilize the pre-trained ResNet50 convolutional neural network (CNN) model for image analysis.
Fine-tune the ResNet50 model on a subset of CT scan images to adapt it for lung cancer detection.
Extract high-level features from CT scan images using the trained ResNet50 model.

**5. Integration and Ensemble:**
Combine predictions from the machine learning models and the ResNet50 image analysis to create an ensemble prediction.
Assign appropriate weights to individual model predictions based on their performance and relevance.
Apply a fusion technique (e.g., weighted average or majority voting) to combine the ensemble predictions.

**6. Prediction and Recommendation Generation:**
Predict the likelihood of lung cancer for each user based on the ensemble model's output.
Generate personalized prevention and cure recommendations using a rule-based system that considers the user's predicted risk, demographic information, and lifestyle factors.
Present prediction results and recommendations in a user-friendly interface.

**7. Model Evaluation and Validation:**
Evaluate the performance of individual machine learning models and the ensemble using metrics such as accuracy, precision, recall, F1-score, and area under the ROC curve.
Validate the image analysis component using a separate set of labeled CT scan images and performance evaluation metrics specific to image classification tasks.

**8. User Testing and Iteration:**
Conduct user testing sessions to gather feedback on the system's usability, accuracy, and comprehensibility.
Incorporate user feedback to improve the system's interface, prediction accuracy, and recommendation relevance.
Iterate on the model training, preprocessing, and analysis based on the insights gained from user testing.

**9. Deployment and Maintenance:**
Deploy the RespiScan 2.0 system to a secure and scalable environment.
Continuously monitor and update the system to incorporate new data, improve model performance, and adapt to emerging trends and advancements in lung cancer research.
RespiScan 2.0's methodology combines the strengths of machine learning algorithms and advanced image analysis techniques, providing users with a comprehensive and accurate lung cancer prediction and prevention solution. The iterative and user-centered approach ensures that the system remains effective and relevant in promoting lung health.

## What I Learned ![Learning](https://user-images.githubusercontent.com/72274851/218499685-e8d445fc-e35e-4ab5-abc1-c32462592603.png)

![Skills Gained](https://user-images.githubusercontent.com/72274851/220130227-3c48e87b-3e68-4f1c-b0e4-8e3ad9a4805a.png)

![Skills Gained](https://openbenchmarking.org/logos/pts_onednn.png)

- **Machine Learning**: Acquired knowledge of various algorithms and their applications in lung cancer detection.
- **Data Analysis**: Gained expertise in data collection, preprocessing, and analysis for model training.
- **Collaboration**: Worked with a diverse team of experts to create RespiScan.
- **Intel oneDAL**: Explored the benefits of utilizing optimized libraries for efficient data analysis and model training.
- **Intel oneDNN**: Uncover the advantages of harnessing optimized libraries for accelerated deep learning inference and performance-efficient neural network computations.

This project enabled me to delve into the complexities of lung cancer detection, expanding my technical skills and understanding of collaborative development. The integration of machine learning, image analysis, and preventive measures underscores the potential of technology to positively impact public health.

Visit the RespiScan 2.0 website hosted on [AWS](https://respiscan.s3.ap-south-1.amazonaws.com/index.html) to learn more about lung cancer prediction, prevention, and early detection.
