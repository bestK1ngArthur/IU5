namespace lab4
{
    partial class MainForm
    {
        /// <summary>
        /// Требуется переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Обязательный метод для поддержки конструктора - не изменяйте
        /// содержимое данного метода при помощи редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.chooseFileButton = new System.Windows.Forms.Button();
            this.labelTime = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.labelCount = new System.Windows.Forms.Label();
            this.textBoxFind = new System.Windows.Forms.TextBox();
            this.buttonSearch = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.labelSeachTime = new System.Windows.Forms.Label();
            this.listOfWords = new System.Windows.Forms.ListBox();
            this.buttonApprox = new System.Windows.Forms.Button();
            this.textBoxMaxDist = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.labelApprox = new System.Windows.Forms.Label();
            this.buttonSaveReport = new System.Windows.Forms.Button();
            this.buttonExit = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.SuspendLayout();
            // 
            // chooseFileButton
            // 
            this.chooseFileButton.Location = new System.Drawing.Point(7, 6);
            this.chooseFileButton.Name = "chooseFileButton";
            this.chooseFileButton.Size = new System.Drawing.Size(138, 52);
            this.chooseFileButton.TabIndex = 0;
            this.chooseFileButton.Text = "Выбрать файл";
            this.chooseFileButton.UseVisualStyleBackColor = true;
            this.chooseFileButton.Click += new System.EventHandler(this.chooseFileButton_Click);
            // 
            // labelTime
            // 
            this.labelTime.AutoSize = true;
            this.labelTime.Location = new System.Drawing.Point(77, 11);
            this.labelTime.Name = "labelTime";
            this.labelTime.Size = new System.Drawing.Size(70, 25);
            this.labelTime.TabIndex = 3;
            this.labelTime.Text = "00\' 00";
            // 
            // label2
            // 
            this.label2.Location = new System.Drawing.Point(3, 11);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(68, 24);
            this.label2.TabIndex = 9;
            this.label2.Text = "Время";
            // 
            // labelCount
            // 
            this.labelCount.AutoSize = true;
            this.labelCount.Location = new System.Drawing.Point(108, 35);
            this.labelCount.Name = "labelCount";
            this.labelCount.Size = new System.Drawing.Size(24, 25);
            this.labelCount.TabIndex = 6;
            this.labelCount.Text = "0";
            // 
            // textBoxFind
            // 
            this.textBoxFind.Location = new System.Drawing.Point(6, 20);
            this.textBoxFind.Name = "textBoxFind";
            this.textBoxFind.Size = new System.Drawing.Size(258, 31);
            this.textBoxFind.TabIndex = 7;
            this.textBoxFind.Text = "Слово";
            this.textBoxFind.TextChanged += new System.EventHandler(this.textBoxFind_TextChanged);
            // 
            // buttonSearch
            // 
            this.buttonSearch.Location = new System.Drawing.Point(270, 20);
            this.buttonSearch.Name = "buttonSearch";
            this.buttonSearch.Size = new System.Drawing.Size(58, 23);
            this.buttonSearch.TabIndex = 8;
            this.buttonSearch.Text = "Поиск";
            this.buttonSearch.UseVisualStyleBackColor = true;
            this.buttonSearch.Click += new System.EventHandler(this.buttonSearch_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(3, 35);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(181, 25);
            this.label3.TabIndex = 11;
            this.label3.Text = "Количество слов";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(4, 172);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(88, 25);
            this.label4.TabIndex = 12;
            this.label4.Text = "Время :";
            // 
            // labelSeachTime
            // 
            this.labelSeachTime.AutoSize = true;
            this.labelSeachTime.Location = new System.Drawing.Point(58, 173);
            this.labelSeachTime.Name = "labelSeachTime";
            this.labelSeachTime.Size = new System.Drawing.Size(70, 25);
            this.labelSeachTime.TabIndex = 13;
            this.labelSeachTime.Text = "00\' 00";
            // 
            // listOfWords
            // 
            this.listOfWords.FormattingEnabled = true;
            this.listOfWords.ItemHeight = 25;
            this.listOfWords.Location = new System.Drawing.Point(5, 49);
            this.listOfWords.Name = "listOfWords";
            this.listOfWords.Size = new System.Drawing.Size(323, 104);
            this.listOfWords.TabIndex = 14;
            this.listOfWords.SelectedIndexChanged += new System.EventHandler(this.listOfWords_SelectedIndexChanged);
            // 
            // buttonApprox
            // 
            this.buttonApprox.Location = new System.Drawing.Point(270, 18);
            this.buttonApprox.Name = "buttonApprox";
            this.buttonApprox.Size = new System.Drawing.Size(58, 25);
            this.buttonApprox.TabIndex = 15;
            this.buttonApprox.Text = "Поиск";
            this.buttonApprox.UseVisualStyleBackColor = true;
            this.buttonApprox.Click += new System.EventHandler(this.buttonApprox_Click);
            // 
            // textBoxMaxDist
            // 
            this.textBoxMaxDist.Location = new System.Drawing.Point(6, 19);
            this.textBoxMaxDist.Name = "textBoxMaxDist";
            this.textBoxMaxDist.Size = new System.Drawing.Size(258, 31);
            this.textBoxMaxDist.TabIndex = 16;
            this.textBoxMaxDist.Text = "Максимальное расстояние";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(6, 42);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(82, 25);
            this.label5.TabIndex = 17;
            this.label5.Text = "Время:";
            // 
            // labelApprox
            // 
            this.labelApprox.AutoSize = true;
            this.labelApprox.Location = new System.Drawing.Point(58, 43);
            this.labelApprox.Name = "labelApprox";
            this.labelApprox.Size = new System.Drawing.Size(70, 25);
            this.labelApprox.TabIndex = 18;
            this.labelApprox.Text = "00\' 00";
            // 
            // buttonSaveReport
            // 
            this.buttonSaveReport.BackColor = System.Drawing.SystemColors.GradientActiveCaption;
            this.buttonSaveReport.ForeColor = System.Drawing.Color.MidnightBlue;
            this.buttonSaveReport.Location = new System.Drawing.Point(253, 332);
            this.buttonSaveReport.Name = "buttonSaveReport";
            this.buttonSaveReport.Size = new System.Drawing.Size(88, 23);
            this.buttonSaveReport.TabIndex = 19;
            this.buttonSaveReport.Text = "Отчёт";
            this.buttonSaveReport.UseVisualStyleBackColor = false;
            this.buttonSaveReport.Click += new System.EventHandler(this.buttonSaveReport_Click);
            // 
            // buttonExit
            // 
            this.buttonExit.BackColor = System.Drawing.Color.Brown;
            this.buttonExit.ForeColor = System.Drawing.Color.Black;
            this.buttonExit.Location = new System.Drawing.Point(7, 332);
            this.buttonExit.Name = "buttonExit";
            this.buttonExit.Size = new System.Drawing.Size(88, 23);
            this.buttonExit.TabIndex = 20;
            this.buttonExit.Text = "Выход";
            this.buttonExit.UseVisualStyleBackColor = false;
            this.buttonExit.Click += new System.EventHandler(this.buttonExit_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.labelTime);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.labelCount);
            this.groupBox1.Location = new System.Drawing.Point(151, 1);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(190, 57);
            this.groupBox1.TabIndex = 21;
            this.groupBox1.TabStop = false;
            this.groupBox1.Enter += new System.EventHandler(this.groupBox1_Enter);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.textBoxFind);
            this.groupBox2.Controls.Add(this.buttonSearch);
            this.groupBox2.Controls.Add(this.listOfWords);
            this.groupBox2.Controls.Add(this.label4);
            this.groupBox2.Controls.Add(this.labelSeachTime);
            this.groupBox2.Location = new System.Drawing.Point(7, 58);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(334, 198);
            this.groupBox2.TabIndex = 22;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Четкий поиск";
            this.groupBox2.Enter += new System.EventHandler(this.groupBox2_Enter);
            // 
            // groupBox3
            // 
            this.groupBox3.BackColor = System.Drawing.SystemColors.ControlLight;
            this.groupBox3.Controls.Add(this.textBoxMaxDist);
            this.groupBox3.Controls.Add(this.buttonApprox);
            this.groupBox3.Controls.Add(this.label5);
            this.groupBox3.Controls.Add(this.labelApprox);
            this.groupBox3.Location = new System.Drawing.Point(7, 262);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(334, 64);
            this.groupBox3.TabIndex = 23;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Нечеткий поиск";
            this.groupBox3.Enter += new System.EventHandler(this.groupBox3_Enter);
            // 
            // MainForm
            // 
            this.ClientSize = new System.Drawing.Size(348, 362);
            this.Controls.Add(this.chooseFileButton);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.buttonExit);
            this.Controls.Add(this.buttonSaveReport);
            this.Name = "MainForm";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.TextBox textBoxFileReadTime;
        private System.Windows.Forms.TextBox listBoxResult;
        private System.Windows.Forms.Button chooseFileButton;
        private System.Windows.Forms.Label labelTime;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label labelCount;
        private System.Windows.Forms.TextBox textBoxFind;
        private System.Windows.Forms.Button buttonSearch;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label labelSeachTime;
        private System.Windows.Forms.ListBox listOfWords;
        private System.Windows.Forms.Button buttonApprox;
        private System.Windows.Forms.TextBox textBoxMaxDist;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label labelApprox;
        private System.Windows.Forms.Button buttonSaveReport;
        private System.Windows.Forms.Button buttonExit;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.GroupBox groupBox3;
    }
}

