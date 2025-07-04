# NJU--AI-Roadmap
NJU_AI_Roadmap/
├── .github/                  # GitHub 自动化配置
│   └── workflows/            # CI/CD 流水线（自动测试/部署）
│       ├── pytest.yml        # Python 测试自动化
│       └── cpp-build.yml     # C++ 编译验证
│
├── papers/                   # 论文研读专区（复试重点！）
│   ├── weekly-notes/         # 周更笔记（按日期命名）
│   │   └── 20240708-LAMDA-Ensemble-Learning.md
│   └── paper-reviews/        # 深度论文解析
│       ├── [CVPR2024] Vision-Transformer-Analysis.pdf
│       └── [NeurIPS2023] GNN-Expressiveness.md
│
├── src/                      # 源代码核心区
│   ├── cpp-core/             # VS2019 项目（高性能计算）
│   │   ├── algorithms/       # 基础算法实现
│   │   │   ├── knn/          # KNN 分类器
│   │   │   └── svm/          # SVM 向量机
│   │   └── utils/            # 工具库
│   │       ├── matrix_ops.cpp
│   │       └── data_loader.h
│   │
│   └── python-ml/            # PyCharm 项目（模型训练）
│       ├── models/           # 机器学习模型
│       │   ├── cnn_mnist.py
│       │   └── transformer.py
│       ├── datasets/         # 数据预处理
│       └── requirements.txt  # 依赖清单
│
├── experiments/              # 实验记录（科研过程可视化）
│   ├── notebooks/            # Jupyter 实验笔记
│   │   ├── 01-EDA.ipynb      # 数据探索
│   │   └── 02-Hyperparameter-Tuning.ipynb
│   └── results/              # 实验结果
│       ├── figures/          # 图表输出
│       └── logs/             # 训练日志
│
├── competitions/             # 竞赛解决方案
│   ├── kaggle-titanic/       # Kaggle 入门赛
│   │   ├── data/
│   │   ├── feature_engineering.py
│   │   └── solution.ipynb
│   └── ccf-bdci/             # 中国计算机学会大赛
│
├── docs/                     # 项目文档
│   ├── api-reference/        # API 文档
│   └── reports/              # 实验报告（LaTeX/PDF）
│
├── .gitignore                # 忽略文件配置
├── LICENSE                   # MIT 许可证
└── README.md                 # 项目门户（含成果展示区）
