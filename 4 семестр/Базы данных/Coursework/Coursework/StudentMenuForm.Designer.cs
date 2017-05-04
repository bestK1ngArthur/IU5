namespace Coursework
{
    partial class StudentMenuForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.exitButton = new System.Windows.Forms.Button();
            this.greetingLabel = new System.Windows.Forms.Label();
            this.progressButton = new System.Windows.Forms.Button();
            this.attendanceButton = new System.Windows.Forms.Button();
            this.groupButton = new System.Windows.Forms.Button();
            this.teachersButton = new System.Windows.Forms.Button();
            this.mainDataSet = new Coursework.mainDataSet();
            this.studentBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.studentTableAdapter = new Coursework.mainDataSetTableAdapters.StudentTableAdapter();
            ((System.ComponentModel.ISupportInitialize)(this.mainDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // exitButton
            // 
            this.exitButton.BackColor = System.Drawing.Color.Silver;
            this.exitButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.exitButton.Location = new System.Drawing.Point(31, 546);
            this.exitButton.Name = "exitButton";
            this.exitButton.Size = new System.Drawing.Size(452, 57);
            this.exitButton.TabIndex = 1;
            this.exitButton.Text = "Выйти";
            this.exitButton.UseVisualStyleBackColor = false;
            this.exitButton.Click += new System.EventHandler(this.exitButton_Click);
            // 
            // greetingLabel
            // 
            this.greetingLabel.AutoSize = true;
            this.greetingLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.875F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.greetingLabel.Location = new System.Drawing.Point(34, 47);
            this.greetingLabel.Name = "greetingLabel";
            this.greetingLabel.Size = new System.Drawing.Size(112, 33);
            this.greetingLabel.TabIndex = 2;
            this.greetingLabel.Text = "Привет";
            this.greetingLabel.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            // 
            // progressButton
            // 
            this.progressButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.progressButton.Location = new System.Drawing.Point(31, 140);
            this.progressButton.Name = "progressButton";
            this.progressButton.Size = new System.Drawing.Size(452, 57);
            this.progressButton.TabIndex = 3;
            this.progressButton.Text = "Успеваемость";
            this.progressButton.UseVisualStyleBackColor = true;
            this.progressButton.Click += new System.EventHandler(this.progressButton_Click);
            // 
            // attendanceButton
            // 
            this.attendanceButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.attendanceButton.Location = new System.Drawing.Point(31, 232);
            this.attendanceButton.Name = "attendanceButton";
            this.attendanceButton.Size = new System.Drawing.Size(452, 57);
            this.attendanceButton.TabIndex = 4;
            this.attendanceButton.Text = "Посещаемость";
            this.attendanceButton.UseVisualStyleBackColor = true;
            // 
            // groupButton
            // 
            this.groupButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.groupButton.Location = new System.Drawing.Point(31, 324);
            this.groupButton.Name = "groupButton";
            this.groupButton.Size = new System.Drawing.Size(452, 57);
            this.groupButton.TabIndex = 5;
            this.groupButton.Text = "Группа";
            this.groupButton.UseVisualStyleBackColor = true;
            // 
            // teachersButton
            // 
            this.teachersButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.teachersButton.Location = new System.Drawing.Point(31, 421);
            this.teachersButton.Name = "teachersButton";
            this.teachersButton.Size = new System.Drawing.Size(452, 57);
            this.teachersButton.TabIndex = 6;
            this.teachersButton.Text = "Преподаватели";
            this.teachersButton.UseVisualStyleBackColor = true;
            // 
            // mainDataSet
            // 
            this.mainDataSet.DataSetName = "mainDataSet";
            this.mainDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // studentBindingSource
            // 
            this.studentBindingSource.DataMember = "Student";
            this.studentBindingSource.DataSource = this.mainDataSet;
            // 
            // studentTableAdapter
            // 
            this.studentTableAdapter.ClearBeforeFill = true;
            // 
            // StudentMenuForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(514, 639);
            this.Controls.Add(this.teachersButton);
            this.Controls.Add(this.groupButton);
            this.Controls.Add(this.attendanceButton);
            this.Controls.Add(this.progressButton);
            this.Controls.Add(this.greetingLabel);
            this.Controls.Add(this.exitButton);
            this.Name = "StudentMenuForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Меню";
            this.FormClosed += new System.Windows.Forms.FormClosedEventHandler(this.StudentMenuForm_FormClosed);
            this.Load += new System.EventHandler(this.StudentMenuForm_Load);
            ((System.ComponentModel.ISupportInitialize)(this.mainDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentBindingSource)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Button exitButton;
        private System.Windows.Forms.Button progressButton;
        private System.Windows.Forms.Button attendanceButton;
        private System.Windows.Forms.Button groupButton;
        private System.Windows.Forms.Button teachersButton;
        private System.Windows.Forms.Label greetingLabel;
        private mainDataSet mainDataSet;
        private System.Windows.Forms.BindingSource studentBindingSource;
        private mainDataSetTableAdapters.StudentTableAdapter studentTableAdapter;
    }
}